#include <stdio.h> 
#define SIZE 10 
 
int main() 
{ 
    int hashTable[SIZE]; 
    int i, key, index, n, j; 
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
        if(hashTable[index] == -1) 
        { 
            hashTable[index] = key; 
        } 
        else 
        { 
            for(j = 1; j < SIZE; j++) 
            { 
                int newIndex = (index + j * j) % SIZE; 
                if(hashTable[newIndex] == -1) 
                { 
                    hashTable[newIndex] = key; 
                    break; 
                } 
            } 
        } 
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
 