#include <stdio.h> 
#define MAX 10 
int main() 
{ 
int graph[MAX][MAX]; 
int i, j, n; 
printf("Enter number of vertices: "); 
scanf("%d", &n); 
printf("Enter the adjacency matrix:\n"); 
for(i = 0; i < n; i++) 
{ 
for(j = 0; j < n; j++) 
{ 
scanf("%d", &graph[i][j]); 
} 
} 
printf("\nAdjacency Matrix of the Graph:\n"); 
for(i = 0; i < n; i++) 
{ 
for(j = 0; j < n; j++) 
{ 
printf("%d ", graph[i][j]); 
} 
printf("\n"); 
} 
printf("\nBIDUR KHANAL\n");
return 0; 
}