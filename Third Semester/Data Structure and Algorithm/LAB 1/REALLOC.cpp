#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5, i, new_size;

    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Initial Elements: ");
    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter new size: ");
    scanf("%d", &new_size);

    arr = (int*)realloc(arr, new_size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = n; i < new_size; i++) {
        arr[i] = 0; 
    }

    printf("Elements after resizing: ");
    for (i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
printf("\nBidur Khanal\n");
    return 0;
}
