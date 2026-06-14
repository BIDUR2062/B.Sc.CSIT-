#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *prev;
struct Node *next;
};

struct Node* insertAtEnd(struct Node *head){
struct Node *newNode,*temp;
int value;

newNode=(struct Node*)malloc(sizeof(struct Node));

if(newNode==NULL){
printf("Memory allocation failed!\n");
return head;
}

printf("Enter data to insert: ");
scanf("%d",&value);

newNode->data=value;
newNode->next=NULL;

if(head==NULL){
newNode->prev=NULL;
head=newNode;
return head;
}

temp=head;

while(temp->next!=NULL){
temp=temp->next;
}

temp->next=newNode;
newNode->prev=temp;

return head;
}

struct Node* deleteFromBeginning(struct Node *head){
struct Node *temp;

if(head==NULL){
printf("List is empty. Deletion not possible.\n");
return head;
}

temp=head;
head=head->next;

if(head!=NULL){
head->prev=NULL;
}

printf("Deleted node data: %d\n",temp->data);

free(temp);

return head;
}

void display(struct Node *head){
struct Node *temp=head;

if(head==NULL){
printf("List is empty.\n");
return;
}

printf("Doubly Linked List: ");

while(temp!=NULL){
printf("%d <-> ",temp->data);
temp=temp->next;
}

printf("NULL\n");
}

int main(){
struct Node *head=NULL;
int choice;

do{
printf("\nMenu:\n");
printf("1. Insert at End\n");
printf("2. Delete from Beginning\n");
printf("3. Display List\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d",&choice);

switch(choice){
case 1:
head=insertAtEnd(head);
break;

case 2:
head=deleteFromBeginning(head);
break;

case 3:
display(head);
break;

case 4:
printf("\nBIDUR KHANAL\n");
printf("Exiting program.\n");
break;

default:
printf("Invalid choice!\n");
}
}while(choice!=4);

return 0;
}