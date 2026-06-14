#include <stdio.h>
void chan(int *num) {
    *num = 20;
}
int main() {
    int n = 10;
    printf("Before function call: %d\n", n);

    chan(&n); 
    printf("After function call: %d\n", n);
    printf("\nBIDUR KHANAL -> BATCH 2081");
    return 0;
}
