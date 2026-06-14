#include <stdio.h>
int main() 
{
    int n, i;
    int *ptr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];  
    ptr = arr;   
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", ptr + i);  
    }
    printf("Elements in reverse order:\n");
    for (i = n - 1; i >= 0; i--) 
    {
        printf("%d ", *(ptr + i));  
    }
    printf("\n");
    printf("\nBIDUR KHANAL -> BATCH 2081");
    return 0;
}
