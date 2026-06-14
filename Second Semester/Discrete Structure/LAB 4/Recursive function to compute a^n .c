#include <stdio.h> 
// Recursive function to compute a^n 
long long power(int a, int n) { 
if (n == 0) 
return 1; 
return a * power(a, n - 1); 
} 
int main() { 
int a, n; 
printf("Enter base (a): "); 
scanf("%d", &a); 
printf("Enter exponent (n): "); 
scanf("%d", &n); 
long long result = power(a, n); 
printf("%d^%d = %lld\n", a, n, result); 
return 0; 
} 