#include <stdio.h> 
 
int main() 
{ 
    int a[50], n, i, key, found = 0; 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
 
    printf("Enter %d elements:\n", n); 
    for(i = 0; i < n; i++) 
    { 
        scanf("%d", &a[i]); 
    } 
 
    printf("Enter element to be searched: "); 
    scanf("%d", &key); 
    for(i = 0; i < n; i++) 
    { 
        if(a[i] == key) 
        { 
            printf("Element found at position %d\n", i + 1); 
            found = 1; 
            break; 
        } 
    } 
    if(found == 0) 
    { 
        printf("Element not found in the list\n"); 
    } 
 printf("\nBIDUR KHANAL\n");
    return 0; 
} 