#include <stdio.h> 
#define MAX 50  
int queue[MAX]; 
int front = -1, rear = -1; 
void enqueue(int value) { 
if (rear == MAX - 1) { 
printf("Queue Overflow! Cannot insert.\n"); 
}  
else { 
if (front == -1) front = 0;
rear++; 
queue[rear] = value; 
printf("%d inserted into queue.\n", value); 
} 
} 
void dequeue() { 
if (front == -1 || front > rear) { 
printf("Queue Underflow! Nothing to delete.\n"); 
}  
else { 
printf("%d deleted from queue.\n", queue[front]); 
front++; 
} 
} 
void peek() { 
if (front == -1 || front > rear) { 
printf("Queue is empty.\n"); 
}  
else { 
printf("Front element is: %d\n", queue[front]); 
} 
}  
void display() { 
if (front == -1 || front > rear) { 
printf("Queue is empty.\n"); 
}  
    else { 
        printf("Queue elements: "); 
        for (int i = front; i <= rear; i++) { 
            printf("%d ", queue[i]); 
        } 
        printf("\n"); 
    } 
} 
int main() { 
    int choice, value; 
    while (1) { 
        printf("\n----- Queue Menu -----\n"); 
        printf("1. Enqueue\n"); 
        printf("2. Dequeue\n"); 
        printf("3. Peek\n"); 
        printf("4. Display\n"); 
        printf("5. Exit\n"); 
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
                peek(); 
                break; 
            case 4: 
                display(); 
                break; 
            case 5: 
            printf("\nBIDUR KHANAL\n");
                return 0; 
                printf("\nBIDUR KHANAL\n");
            default: 
                printf("Invalid choice! Try again.\n"); 
                
        } 
    } 
} 
 
