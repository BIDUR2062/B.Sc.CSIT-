#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *ptr;
    int n = 5;
    ptr = (int *)calloc(n, sizeof(int)); 
    if (ptr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    int i;
    for (i = 0; i < n; i++) 
    {
        ptr[i] = i + 1;
    }
    for (i = 0; i < n; i++) 
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr); 
    printf("\nBIDUR KHANAL -> BATCH 2081");
    return 0;
}
