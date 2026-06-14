#include <stdio.h> 
#include <stdlib.h> 
 
struct Node { 
    int data; 
    struct Node *next; 
}; 
void display(struct Node *head) { 
    struct Node *temp = head; 
    printf("\nLinked List: "); 
    while(temp != NULL) { 
        printf("%d -> ", temp->data); 
        temp = temp->next; 
    } 
    printf("NULL\n"); 
} 
 
int main() { 
    struct Node *head = NULL, *newNode, *temp; 
    int value, position, choice; 
 
    do { 
        printf("\nEnter value to insert: "); 
        scanf("%d", &value); 
 
        printf("Enter position to insert (starting from 1): "); 
        scanf("%d", &position); 
        newNode = (struct Node*)malloc(sizeof(struct Node)); 
        newNode->data = value; 
        newNode->next = NULL; 
        if(position == 1) { 
            newNode->next = head; 
            head = newNode; 
        } 
        else { 
            int i = 1; 
temp = head; 
while(i < position - 1 && temp != NULL) { 
temp = temp->next; 
i++; 
}  
if(temp == NULL) { 
printf("Invalid position! Cannot insert.\n"); 
free(newNode); 
} 
else { 
newNode->next = temp->next; 
temp->next = newNode; 
} 
} 
display(head); 
printf("\nInsert another node? (1 = Yes, 0 = No): "); 
scanf("%d", &choice); 
} while(choice == 1); 
printf("\nFinal Linked List:"); 
display(head); 
printf("\nBIDUR KHANAL\n");
return 0; 
}