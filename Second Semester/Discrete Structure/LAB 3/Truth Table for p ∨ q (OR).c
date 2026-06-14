#include <stdio.h> 
int main() { 
    int p, q; 
    printf("p\tq\tp OR q\n"); 
    for (p = 0; p <= 1; p++) { 
        for (q = 0; q <= 1; q++) { 
            printf("%d\t%d\t%d\n", p, q, p || q); 
        } 
    } 
    return 0; 
}