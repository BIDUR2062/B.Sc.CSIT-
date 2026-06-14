#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);

    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int extended_gcd(int a, int b, int *x, int *y) {
    if (b == 0) {
        *x = 1;
        *y = 0;
        return a;
    }

    int x1, y1;
    int gcd_value = extended_gcd(b, a % b, &x1, &y1);

    *x = y1;
    *y = x1 - (a / b) * y1;

    return gcd_value;
}

int main() {
    int a, b;
    printf("Enter two integers for GCD calculation:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    int result = gcd(a, b);
    printf("\nThe GCD of %d and %d is: %d\n", a, b, result);

    int x, y;
    int ext_result = extended_gcd(a, b, &x, &y);

    printf("\nExtended Euclidean Algorithm results:\n");
    printf("GCD(%d, %d) = %d\n", a, b, ext_result);
    printf("Bezout coefficients: x = %d, y = %d\n", x, y);
    printf("Verification: %d * %d + %d * %d = %d\n", a, x, b, y, ext_result);

    return 0;
}