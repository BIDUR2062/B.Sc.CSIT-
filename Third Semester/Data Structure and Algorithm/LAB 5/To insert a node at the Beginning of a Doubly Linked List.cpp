#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *prev;
struct Node *next;
};
struct Node* insertAtBeginning(struct Node *head){
struct Node *newNode;
int value;
newNode=(struct Node*)malloc(sizeof(struct Node));
if(newNode==NULL){
printf("Memory allocation failed!\n");
return head;
}
printf("Enter data to insert: ");
scanf("%d",&value);
newNode->data=value;
newNode->prev=NULL;
newNode->next=head;
if(head!=NULL){
head->prev=newNode;
}
head=newNode;
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
printf("\n1. Insert at Beginning");
printf("\n2. Display");
printf("\n3. Exit");
printf("\nEnter your choice: ");
scanf("%d",&choice);

switch(choice){
case 1:
head=insertAtBeginning(head);
break;
case 2:
display(head);
break;
case 3:
printf("\nBIDUR KHANAL\n");
printf("Exiting program.\n");
break;
default:
printf("Invalid choice!\n");
}
}while(choice!=3);
return 0;
}