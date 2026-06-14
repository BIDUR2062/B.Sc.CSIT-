#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *ptr;
    int i; 
    ptr = (int *)malloc(5 * sizeof(int)); 
    if (ptr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (i = 0; i < 5; i++) 
    {
        ptr[i] = i + 1;
    }
    for (i = 0; i < 5; i++) 
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);
printf("\nBIDUR KHANAL -> BATCH 2081");
    return 0;
}
