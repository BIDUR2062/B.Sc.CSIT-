#include <stdio.h>

int main() {
    int n, i;

    printf("Grammar:\n");
    printf("S -> aSb | ab\n");

    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input!\n");
        return 0;
    }

    printf("\nLeftmost Derivation:\n");

    printf("S");

    for (i = 1; i < n; i++) {
        printf(" => aSb");
    }

    printf(" => ab");

    printf("\n\nGenerated String: ");

    for (i = 0; i < n; i++)
        printf("a");

    for (i = 0; i < n; i++)
        printf("b");

    printf("\n");
    printf("\nBIDUR KHANAL\n");
    return 0;
}