#include <stdio.h> 
// Recursive function to compute (a^n) % m 
int modPower(int a, int n, int m) { 
if (n == 0) 
return 1 % m; 
int half = modPower(a, n / 2, m); 
int result = (1LL * half * half) % m; 
if (n % 2 == 1) 
result = (1LL * result * a) % m; 
return result; 
} 
int main() { 
int a, n, m; 
printf("Enter base a, exponent n, and modulus m: "); 
scanf("%d %d %d", &a, &n, &m); 
printf("Result: %d\n", modPower(a, n, m)); 
return 0; 
}