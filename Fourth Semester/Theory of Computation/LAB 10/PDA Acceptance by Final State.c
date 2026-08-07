#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char input[MAX];
    char stack[MAX];
    int top = -1;
    int i = 0;
    int state = 0;

    printf("Enter the string: ");
    scanf("%s", input);

    stack[++top] = '$';

    while (input[i] == 'a') {
        stack[++top] = 'A';
        i++;
    }

    state = 1;

    while (input[i] == 'b') {
        if (top == 0) {
            printf("String Rejected.\n");
            return 0;
        }
        top--;
        i++;
    }

    if (input[i] == '\0' && top == 0 && state == 1)
        printf("String Accepted by Final State.\n");
    else
        printf("String Rejected.\n");


    printf("\nBIDUR KHANAL\n");
    return 0;
}