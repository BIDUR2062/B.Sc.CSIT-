#include <stdio.h> 
 
int main() 
{ 
    int a[50], n, i, key; 
    int low, high, mid, found = 0; 
 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
 
    printf("Enter %d elements in sorted order:\n", n); 
    for(i = 0; i < n; i++) 
    { 
        scanf("%d", &a[i]); 
    } 
 
    printf("Enter element to be searched: "); 
    scanf("%d", &key); 
 
    low = 0; 
    high = n - 1; 
    while(low <= high) 
    { 
        mid = (low + high) / 2; 
 
        if(a[mid] == key) 
        { 
            printf("Element found at position %d\n", mid + 1); 
            found = 1; 
            break; 
        } 
        else if(a[mid] > key) 
        { 
            high = mid - 1; 
        } 
        else 
        { 
            low = mid + 1; 
        } 
    } 
 
    if(found == 0) 
    { 
        printf("Element not found in the list\n"); 
    } 
 printf("\nBIDUR KHANAL\n");
    return 0; 
}