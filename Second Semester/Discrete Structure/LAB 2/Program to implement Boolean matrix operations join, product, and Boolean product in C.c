#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

void print_matrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void boolean_join(int A[][MAX_SIZE], int B[][MAX_SIZE], int C[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] || B[i][j];
        }
    }
}

void matrix_product(int A[][MAX_SIZE], int B[][MAX_SIZE], int C[][MAX_SIZE],
                    int rows_A, int cols_A, int cols_B) {
    for (int i = 0; i < rows_A; i++) {
        for (int j = 0; j < cols_B; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < rows_A; i++) {
        for (int j = 0; j < cols_B; j++) {
            for (int k = 0; k < cols_A; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
            C[i][j] = C[i][j] > 0 ? 1 : 0;
        }
    }
}

void boolean_product(int A[][MAX_SIZE], int B[][MAX_SIZE], int C[][MAX_SIZE],
                     int rows_A, int cols_A, int cols_B) {
    for (int i = 0; i < rows_A; i++) {
        for (int j = 0; j < cols_B; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < rows_A; i++) {
        for (int j = 0; j < cols_B; j++) {
            for (int k = 0; k < cols_A; k++) {
                C[i][j] = C[i][j] || (A[i][k] && B[k][j]);
            }
        }
    }
}

int main() {
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE];
    int rows_A, cols_A, rows_B, cols_B;

    printf("Enter dimensions of matrix A (rows cols): ");
    scanf("%d %d", &rows_A, &cols_A);

    printf("Enter dimensions of matrix B (rows cols): ");
    scanf("%d %d", &rows_B, &cols_B);

    if (cols_A != rows_B) {
        printf("Error: Matrices are not compatible for multiplication.\n");
        printf("The number of columns in A must equal the number of rows in B.\n");
        return 1;
    }

    if (rows_A != rows_B || cols_A != cols_B) {
        printf("Warning: Matrices are not the same size for join operation.\n");
        printf("Using dimensions of matrix A for join operation.\n");
    }

    printf("\nEnter boolean values (0 or 1) for matrix A (%dx%d):\n", rows_A, cols_A);
    for (int i = 0; i < rows_A; i++) {
        for (int j = 0; j < cols_A; j++) {
            scanf("%d", &A[i][j]);
            A[i][j] = A[i][j] ? 1 : 0;
        }
    }

    printf("\nEnter boolean values (0 or 1) for matrix B (%dx%d):\n", rows_B, cols_B);
    for (int i = 0; i < rows_B; i++) {
        for (int j = 0; j < cols_B; j++) {
            scanf("%d", &B[i][j]);
            B[i][j] = B[i][j] ? 1 : 0;
        }
    }

    printf("\n1. Boolean Join (OR) Operation:\n");
    boolean_join(A, B, C,
                 rows_A < rows_B ? rows_A : rows_B,
                 cols_A < cols_B ? cols_A : cols_B);
    print_matrix(C,
                 rows_A < rows_B ? rows_A : rows_B,
                 cols_A < cols_B ? cols_A : cols_B);

    printf("\n2. Regular Matrix Product:\n");
    matrix_product(A, B, C, rows_A, cols_A, cols_B);
    print_matrix(C, rows_A, cols_B);

    printf("\n3. Boolean Matrix Product:\n");
    boolean_product(A, B, C, rows_A, cols_A, cols_B);
    print_matrix(C, rows_A, cols_B);

    return 0;
}