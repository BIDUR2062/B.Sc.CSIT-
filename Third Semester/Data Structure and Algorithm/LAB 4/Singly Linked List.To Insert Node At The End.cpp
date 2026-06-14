 
#include <stdio.h> 
#include <stdlib.h> 
 
struct Node { 
    int data; 
    struct Node* next; 
};  
void display(struct Node* head) { 
    struct Node* temp = head; 
    printf("\nLinked List: "); 
    while(temp != NULL) { 
        printf("%d -> ", temp->data); 
        temp = temp->next; 
    } 
    printf("NULL\n"); 
} 
 
int main() { 
    struct Node *head = NULL, *newNode, *temp; 
    int value, choice; 
 
    do { 
        printf("Enter a value to insert at the end: "); 
        scanf("%d", &value);  
        newNode = (struct Node*)malloc(sizeof(struct Node)); 
        newNode->data = value; 
        newNode->next = NULL; 
        if(head == NULL) { 
            head = newNode; 
        } 
        else { 
       
            temp = head; 
            while(temp->next != NULL) { 
                temp = temp->next; 
            } 
            temp->next = newNode; 
        } 
 
        display(head); 
 
        printf("Do you want to insert another node? (1 = Yes, 0 = No): "); 
        scanf("%d", &choice); 
 
    } while(choice == 1); 
 
    printf("\nFinal Linked List:\n"); 
    display(head); 
 printf("\nBIDUR KHANAl\n");
    return 0; 
} 