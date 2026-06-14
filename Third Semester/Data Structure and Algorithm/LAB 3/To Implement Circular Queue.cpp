#include <stdio.h> 
#define MAX 3   
int queue[MAX]; 
int front = -1, rear = -1; 
void enqueue(int value) { 
if ((front == 0 && rear == MAX - 1) || (rear + 1) % MAX == front) { 
printf("Queue Overflow! Circular queue is full.\n"); 
return; 
} 
if (front == -1) { 
front = 0; 
rear = 0; 
}  
else { 
rear = (rear + 1) % MAX;
} 
queue[rear] = value; 
printf("%d inserted into circular queue.\n", value); 
} 
void dequeue() { 
if (front == -1) { 
printf("Queue Underflow! Circular queue is empty.\n"); 
return; 
} 
printf("%d deleted from circular queue.\n", queue[front]);  
if (front == rear) { 
front = -1; 
rear = -1; 
}  
else { 
front = (front + 1) % MAX;
} 
} 
void display() { 
    if (front == -1) { 
        printf("Circular queue is empty.\n"); 
        return; 
    } 
    printf("Circular Queue elements: "); 
    int i = front; 
    while (1) { 
        printf("%d ", queue[i]); 
        if (i == rear) break; 
        i = (i + 1) % MAX; 
    } 
    printf("\n"); 
} 
int main() { 
    int choice, value; 
 
    while (1) { 
        printf("\n----- Circular Queue Menu -----\n"); 
        printf("1. Insert\n"); 
        printf("2. Delete\n"); 
        printf("3. Display\n"); 
        printf("4. Exit\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) { 
            case 1: 
                printf("Enter value to insert: "); 
                scanf("%d", &value); 
                enqueue(value); 
                break; 
 
            case 2: 
                dequeue(); 
                break; 
 
            case 3: 
                display(); 
                break; 
 
            case 4: 
               printf("\nBIDUR KHANAL\n");
                return 0; 
 
            default: 
         
                printf("Invalid choice! Try again.\n"); 
} 
} 
} 