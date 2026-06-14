#include <stdio.h>
int product(int a, int b) 
{
    return a * b;
}
int main() 
{
    int a, b;
    printf("Enter any two integers: ");
    scanf("%d %d", &a, &b);
    printf("The result is: %d\n", product(a, b));  
printf("\nBIDUR KHANAL -> BATCH 2081");
    return 0;
}
