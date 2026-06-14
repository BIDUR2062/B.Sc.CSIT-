#include <stdio.h> 
#include <stdlib.h> 
 
#define SIZE 10  
struct node 
{ 
    int data; 
    struct node *next; 
}; 
 
struct node *hashTable[SIZE]; 
void insert(int key) 
{ 
    int index = key % SIZE; 
 
    struct node *newNode = (struct node *)malloc(sizeof(struct node)); 
    newNode->data = key; 
    newNode->next = NULL; 
 
    if(hashTable[index] == NULL) 
    { 
        hashTable[index] = newNode; 
    } 
    else 
    { 
        struct node *temp = hashTable[index]; 
        while(temp->next != NULL) 
        { 
            temp = temp->next; 
        } 
        temp->next = newNode; 
    } 
} 
void display() 
{ 
    int i; 
    struct node *temp; 
 
    printf("\nHash Table:\n"); 
    for(i = 0; i < SIZE; i++) 
    { 
        printf("Index %d: ", i); 
        temp = hashTable[i]; 
        while(temp != NULL) 
        { 
            printf("%d -> ", temp->data); 
            temp = temp->next; 
        } 
        printf("NULL\n"); 
    } 
} 
 
int main() 
{ 
    int i, n, key; 
    for(i = 0; i < SIZE; i++) 
    { 
        hashTable[i] = NULL; 
    } 
 
    printf("Enter number of elements to insert: "); 
    scanf("%d", &n); 
 
    for(i = 0; i < n; i++) 
    { 
        printf("Enter key %d: ", i + 1); 
        scanf("%d", &key); 
        insert(key); 
    } 
 
    display(); 
    printf("\nBIDUR KHANAL\n");
return 0; 
}