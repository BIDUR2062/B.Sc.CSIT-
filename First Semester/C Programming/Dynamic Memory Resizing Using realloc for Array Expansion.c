#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *ptr;
    int n1 = 5, n2 = 10;
    int i;
    ptr = (int *)malloc(n1 * sizeof(int));
    if (ptr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (i = 0; i < n1; i++) 
    {
        ptr[i] = i + 1; 
        printf("%d ", ptr[i]); 
    }
    printf("\n");
    ptr = (int *)realloc(ptr, n2 * sizeof(int));
    if (ptr == NULL) 
    {
        printf("Memory reallocation failed\n");
        return 1;
    }
    for (i = n1; i < n2; i++) 
    {
        ptr[i] = i + 1; 
    }
    for (i = 0; i < n2; i++) 
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);
printf("\nBIDUR KHANAL -> BATCH 2081");
    return 0;
}
