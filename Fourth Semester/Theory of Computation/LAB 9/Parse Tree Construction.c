#include <stdio.h>

void indent(int level) {
    for (int i = 0; i < level; i++)
        printf("    ");
}

void printTree(int n, int level) {
    indent(level);
    printf("S\n");

    if (n == 1) {
        indent(level + 1);
        printf("|-- a\n");

        indent(level + 1);
        printf("|-- b\n");
    } else {
        indent(level + 1);
        printf("|-- a\n");

        indent(level + 1);
        printTree(n - 1, level + 1);

        indent(level + 1);
        printf("|-- b\n");
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