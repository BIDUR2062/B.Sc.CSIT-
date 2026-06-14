#include <stdio.h> 
#include <math.h> 
int main() { 
float num; 
printf("Enter a number: "); 
scanf("%f", &num); 
printf("Ceiling: %d\n", (int)ceil(num)); 
printf("Floor: %d\n", (int)floor(num)); 
return 0; 
} 