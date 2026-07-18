#include <stdio.h>


int fibonacci(int n) {
    if (n <= 0) {
        return -1; 
    } else if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        int a = 0, b = 1, c;
        for (int i = 2; i < n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}


int is_prime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n;
    
    
    printf("Enter the value of n to find the nth Fibonacci term: ");
    scanf("%d", &n);
    
    
    int nth_fibonacci = fibonacci(n);
    printf("The %dth Fibonacci number is: %d\n", n, nth_fibonacci);
    
    
    if (is_prime(nth_fibonacci)) {
        printf("The %dth Fibonacci number %d is a prime number.\n", n, nth_fibonacci);
    } else {
        printf("The %dth Fibonacci number %d is not a prime number.\n", n, nth_fibonacci);
    }
    
    return 0;
}
