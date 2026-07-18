#include <stdio.h>

int main() {
    int count = 0, sum = 0, i = 1;
    
    while (count < 10) {
        sum += i;
        i += 2;  // Move to the next odd number
        count++; // Increment count
    }

    printf("Sum of first 10 odd numbers: %d\n", sum);
    return 0;
}
