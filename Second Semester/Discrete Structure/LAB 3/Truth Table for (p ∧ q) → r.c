#include <stdio.h> 
 
int main() { 
    int p, q, r; 
    printf("p\tq\tr\t(p ? q) ? r\n"); 
    for (p = 0; p <= 1; p++) { 
        for (q = 0; q <= 1; q++) { 
            for (r = 0; r <= 1; r++) { 
                int conjunction = p && q; 
                int implication = !conjunction || r; 
                printf("%d\t%d\t%d\t%d\n", p, q, r, implication); 
            } 
        } 
    } 
    return 0; 
}