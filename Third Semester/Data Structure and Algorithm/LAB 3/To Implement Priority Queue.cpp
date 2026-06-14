#include <stdio.h> 
#define MAX 100 
int queue[MAX]; 
int n = 0; 
void enqueue(int value) { 
int i; 
if (n == MAX) { 
printf("Queue Overflow!\n"); 
return; 
} 
queue[n] = value; 
n++; 
printf("%d inserted into the priority queue.\n", value); 
} 
void dequeue() { 
if (n == 0) { 
printf("Queue Underflow!\n"); 
return; 
} 
int minIndex = 0; 
for (int i = 1; i < n; i++) { 
if (queue[i] < queue[minIndex]) { 
minIndex = i; 
} 
} 
printf("Dequeued element: %d\n", queue[minIndex]); 
for (int i = minIndex; i < n - 1; i++) { 
queue[i] = queue[i + 1]; 
} 
n--; 
} 
void display() { 
if (n == 0) { 
printf("Queue is empty.\n"); 
return; 
} 
printf("Priority Queue elements: "); 
for (int i = 0; i < n; i++) { 
printf("%d ", queue[i]); 
} 
printf("\n"); 
} 
int main() { 
int choice, value; 
while (1) { 
printf("\nPriority Queue Operations:\n"); 
printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n"); 
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