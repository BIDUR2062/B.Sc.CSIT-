#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BASE 1000000000
#define MAX_DIGITS 1000
#define MAX_CHUNKS (MAX_DIGITS / 9 + 1)

typedef struct {
    int chunks[MAX_CHUNKS];
    int num_chunks;
    int sign;
} LargeInt;

void init_large_int(LargeInt *num);
void set_from_string(LargeInt *num, const char *str);
void print_large_int(const LargeInt *num);
void normalize(LargeInt *num);
int compare_abs(const LargeInt *a, const LargeInt *b);
void add_large_int(const LargeInt *a, const LargeInt *b, LargeInt *result);
void subtract_large_int(const LargeInt *a, const LargeInt *b, LargeInt *result);
void multiply_large_int(const LargeInt *a, const LargeInt *b, LargeInt *result);
int divide_large_int(const LargeInt *a, const LargeInt *b, LargeInt *quotient, LargeInt *remainder);

void init_large_int(LargeInt *num) {
    memset(num->chunks, 0, sizeof(num->chunks));
    num->num_chunks = 1;
    num->sign = 0;
}

void set_from_string(LargeInt *num, const char *str) {
    init_large_int(num);

    while (isspace(*str)) str++;

    if (*str == '-') {
        num->sign = -1;
        str++;
    } else {
        num->sign = 1;
        if (*str == '+') str++;
    }

    while (*str == '0' && *(str + 1) != '\0') str++;

    if (*str == '0' && *(str + 1) == '\0') {
        num->sign = 0;
        return;
    }

    int len = strlen(str);

    int chunk_index = 0;
    for (int i = len; i > 0; i -= 9) {
        int start = i - 9;
        if (start < 0) start = 0;

        int chunk = 0;
        int multiplier = 1;
        for (int j = i - 1; j >= start; j--) {
            if (!isdigit(str[j])) {
                printf("Error: Invalid character in input string\n");
                init_large_int(num);
                return;
            }
            chunk += (str[j] - '0') * multiplier;
            multiplier *= 10;
        }

        num->chunks[chunk_index++] = chunk;
    }

    num->num_chunks = chunk_index;
}

void print_large_int(const LargeInt *num) {
    if (num->sign == 0) {
        printf("0");
        return;
    }

    if (num->sign == -1) {
        printf("-");
    }

    printf("%d", num->chunks[num->num_chunks - 1]);

    for (int i = num->num_chunks - 2; i >= 0; i--) {
        printf("%09d", num->chunks[i]);
    }
}

void normalize(LargeInt *num) {
    int highest = num->num_chunks - 1;

    while (highest >= 0 && num->chunks[highest] == 0) {
        highest--;
    }

    if (highest < 0) {
        num->num_chunks = 1;
        num->sign = 0;
    } else {
        num->num_chunks = highest + 1;
    }
}

int compare_abs(const LargeInt *a, const LargeInt *b) {
    if (a->num_chunks > b->num_chunks) return 1;
    if (a->num_chunks < b->num_chunks) return -1;

    for (int i = a->num_chunks - 1; i >= 0; i--) {
        if (a->chunks[i] > b->chunks[i]) return 1;
        if (a->chunks[i] < b->chunks[i]) return -1;
    }

    return 0;
}

void add_large_int(const LargeInt *a, const LargeInt *b, LargeInt *result) {
    init_large_int(result);

    if (a->sign == 0) {
        *result = *b;
        return;
    }

    if (b->sign == 0) {
        *result = *a;
        return;
    }

    if (a->sign != b->sign) {
        LargeInt negated_b = *b;
        negated_b.sign = -b->sign;
        subtract_large_int(a, &negated_b, result);
        return;
    }

    result->sign = a->sign;

    int max_chunks = (a->num_chunks > b->num_chunks) ? a->num_chunks : b->num_chunks;

    int carry = 0;
    for (int i = 0; i < max_chunks || carry; i++) {
        long long sum = carry;

        if (i < a->num_chunks) sum += a->chunks[i];
        if (i < b->num_chunks) sum += b->chunks[i];

        result->chunks[i] = sum % BASE;
        carry = sum / BASE;

        if (i >= result->num_chunks && (result->chunks[i] > 0 || carry > 0)) {
            result->num_chunks = i + 1;
        }
    }

    normalize(result);
}

void subtract_large_int(const LargeInt *a, const LargeInt *b, LargeInt *result) {
    init_large_int(result);

    if (b->sign == 0) {
        *result = *a;
        return;
    }

    if (a->sign == 0) {
        *result = *b;
        result->sign = -b->sign;
        return;
    }

    if (a->sign != b->sign) {
        LargeInt negated_b = *b;
        negated_b.sign = -b->sign;
        add_large_int(a, &negated_b, result);
        return;
    }

    int cmp = compare_abs(a, b);

    if (cmp == 0) {
        init_large_int(result);
        return;
    }

    const LargeInt *larger, *smaller;

    if (cmp > 0) {
        larger = a;
        smaller = b;
        result->sign = a->sign;
    } else {
        larger = b;
        smaller = a;
        result->sign = -a->sign;
    }

    int borrow = 0;

    for (int i = 0; i < larger->num_chunks; i++) {
        int diff = larger->chunks[i] - borrow;

        if (i < smaller->num_chunks) diff -= smaller->chunks[i];

        if (diff < 0) {
            diff += BASE;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result->chunks[i] = diff;

        if (diff > 0) {
            result->num_chunks = i + 1;
        }
    }

    normalize(result);
}

void multiply_large_int(const LargeInt *a, const LargeInt *b, LargeInt *result) {
    init_large_int(result);

    if (a->sign == 0 || b->sign == 0) {
        return;
    }

    result->sign = a->sign * b->sign;
    result->num_chunks = a->num_chunks + b->num_chunks;

    for (int i = 0; i < a->num_chunks; i++) {
        long long carry = 0;

        for (int j = 0; j < b->num_chunks || carry > 0; j++) {
            long long product = result->chunks[i + j] + carry;

            if (j < b->num_chunks) {
                product += (long long)a->chunks[i] * b->chunks[j];
            }

            result->chunks[i + j] = product % BASE;
            carry = product / BASE;
        }
    }

    normalize(result);
}

int divide_large_int(const LargeInt *a, const LargeInt *b, LargeInt *quotient, LargeInt *remainder) {
    if (b->sign == 0) {
        printf("Error: Division by zero\n");
        init_large_int(quotient);
        init_large_int(remainder);
        return -1;
    }

    init_large_int(quotient);
    *remainder = *a;
    remainder->sign = 1;

    if (a->sign == 0) {
        return 0;
    }

    LargeInt abs_b = *b;
    abs_b.sign = 1;

    if (compare_abs(a, &abs_b) < 0) {
        *remainder = *a;
        return 0;
    }

    LargeInt temp_dividend;
    init_large_int(&temp_dividend);

    int dividend_index = a->num_chunks - 1;
    int quotient_index = a->num_chunks - b->num_chunks;

    while (dividend_index >= 0) {
        for (int i = temp_dividend.num_chunks; i > 0; i--) {
            temp_dividend.chunks[i] = temp_dividend.chunks[i - 1];
        }

        temp_dividend.num_chunks++;
        temp_dividend.chunks[0] = remainder->chunks[dividend_index--];

        normalize(&temp_dividend);

        if (compare_abs(&temp_dividend, &abs_b) < 0) {
            if (quotient_index >= 0) {
                quotient->chunks[quotient_index--] = 0;
            }
            continue;
        }

        int count = 0;

        while (compare_abs(&temp_dividend, &abs_b) >= 0) {
            LargeInt temp;
            subtract_large_int(&temp_dividend, &abs_b, &temp);
            temp_dividend = temp;
            count++;
        }

        if (quotient_index >= 0) {
            quotient->chunks[quotient_index--] = count;
        }
    }

    quotient->sign = a->sign * b->sign;
    normalize(quotient);

    if (remainder->num_chunks > 1 || remainder->chunks[0] > 0) {
        remainder->sign = a->sign;
    }

    return 0;
}

int main() {
    char input1[MAX_DIGITS + 2];
    char input2[MAX_DIGITS + 2];
    char operation;

    LargeInt num1, num2, result, remainder;

    printf("Large Integer Calculator\n");
    printf("Supports operations: +, -, *, /\n");

    printf("\nEnter the first large integer: ");
    scanf("%s", input1);

    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter the second large integer: ");
    scanf("%s", input2);

    set_from_string(&num1, input1);
    set_from_string(&num2, input2);

    switch (operation) {
        case '+':
            add_large_int(&num1, &num2, &result);
            printf("\nResult: ");
            print_large_int(&result);
            printf("\n");
            break;

        case '-':
            subtract_large_int(&num1, &num2, &result);
            printf("\nResult: ");
            print_large_int(&result);
            printf("\n");
            break;

        case '*':
            multiply_large_int(&num1, &num2, &result);
            printf("\nResult: ");
            print_large_int(&result);
            printf("\n");
            break;

        case '/':
            if (divide_large_int(&num1, &num2, &result, &remainder) == 0) {
                printf("\nQuotient: ");
                print_large_int(&result);
                printf("\nRemainder: ");
                print_large_int(&remainder);
                printf("\n");
            }
            break;

        default:
            printf("Error: Unsupported operation\n");
    }

    return 0;
}