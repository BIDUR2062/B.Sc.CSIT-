#include <stdio.h>

void printTree(int n, int level) {
    int i;

    for (i = 0; i < level; i++)
        printf("    ");

    printf("S\n");

    if (n == 1) {
        for (i = 0; i < level + 1; i++)
            printf("    ");
        printf("a\n");

        for (i = 0; i < level + 1; i++)
            printf("    ");
        printf("b\n");
    } else {
        for (i = 0; i < level + 1; i++)
            printf("    ");
        printf("a\n");

        printTree(n - 1, level + 1);

        for (i = 0; i < level + 1; i++)
            printf("    ");
        printf("b\n");
    }
}

int main() {
    int n;

    printf("Grammar:\n");
    printf("S -> aSb | ab\n");

    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input!\n");
        return 0;
    }

    printf("\nParse Tree:\n\n");

    printTree(n, 0);

    printf("\nBIDUR KHANAL\n");

    return 0;
}