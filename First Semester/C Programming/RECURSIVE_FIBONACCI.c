#include <stdio.h>

int fibo(int n) {
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", fibo(i)); 
    }
    
    return 0;
}
