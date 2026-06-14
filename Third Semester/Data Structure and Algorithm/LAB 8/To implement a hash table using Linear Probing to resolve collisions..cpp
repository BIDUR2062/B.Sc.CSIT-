#include <stdio.h> 
#define SIZE 10 
 
int main() 
{ 
    int hashTable[SIZE]; 
    int i, key, index, n; 
    for(i = 0; i < SIZE; i++) 
    { 
        hashTable[i] = -1; 
    } 
    printf("Enter number of elements to insert: "); 
    scanf("%d", &n); 
 
    for(i = 0; i < n; i++) 
    { 
        printf("Enter key %d: ", i + 1); 
        scanf("%d", &key); 
 
        index = key % SIZE; 
        while(hashTable[index] != -1) 
        { 
            index = (index + 1) % SIZE; 
        } 
 
        hashTable[index] = key; 
    } 
 
    printf("\nHash Table:\n"); 
    printf("Index\tValue\n"); 
    for(i = 0; i < SIZE; i++) 
    { 
        printf("%d\t", i); 
        if(hashTable[i] != -1) 
            printf("%d\n", hashTable[i]); 
        else 
            printf("-\n"); 
    } 
 printf("\nBIDUR KHANAL\n");
    return 0; 
} 
