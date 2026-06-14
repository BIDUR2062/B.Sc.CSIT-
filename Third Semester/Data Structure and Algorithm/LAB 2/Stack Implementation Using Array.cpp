#include <stdio.h> 
#include <stdlib.h> 
#define MAX 5  
int stack[MAX]; 
int top = -1; 
void push(int value) { 
if (top == MAX - 1) { 
printf("\nStack Overflow! Cannot push %d.\n", value); 
} else { 
top++; 
stack[top] = value; 
printf("Pushed %d into the stack.\n", value); 
} 
} 

int pop() { 
if (top == -1) { 
printf("\nStack Underflow! No element to pop.\n"); 
return -1; 
} else { 
int poppedValue = stack[top]; 
top--; 
printf("Popped %d from the stack.\n", poppedValue); 
return poppedValue; 
} 
} 
int peek() { 
if (top == -1) { 
printf("\nStack is empty! No top element.\n"); 
return -1; 
} else { 
printf("Top element: %d\n", stack[top]); 
return stack[top]; 
} 
} 
void display() { 
if (top == -1) { 
printf("\nStack is empty.\n"); 
} else { 
printf("\nStack elements (top to bottom):\n"); 
for (int i = top; i >= 0; i--) { 
            printf("%d\n", stack[i]); 
        } 
    } 
} 
int main() { 
    int choice, value; 
    while (1) { 
        printf("\n--- Stack Menu ---\n"); 
        printf("1. Push\n"); 
        printf("2. Pop\n"); 
        printf("3. Peek\n"); 
        printf("4. Display\n"); 
        printf("5. Exit\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) { 
            case 1: 
                printf("Enter value to push: "); 
                scanf("%d", &value); 
                push(value); 
                break; 
 
            case 2: 
                pop(); 
                break; 
 
            case 3: 
                peek(); 
                break; 
 
            case 4: 
                display(); 
                break; 
 
            case 5: 
                printf("Exiting program.\n"); 
                printf("\nBidur Khanal\n");
                exit(0); 
 
            default: 
                printf("Invalid choice! Try again.\n"); 
        } 
    } 
 printf("\nBidur Khanal\n");
    return 0; 
}