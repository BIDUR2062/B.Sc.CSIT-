#include<stdio.h>
int main()
{ 
    float a, b, sum, mul, sub, div;
    int op;
    printf("Enter the value of op:");
    scanf("%d", &op);
    switch (op)
    {
        case 1:
            printf("Enter the value of a and b:");
            scanf("%f%f", &a, &b); 
            sum = a + b;
            printf("The value of sum is %f", sum);
            break;
        case 2:
            printf("Enter the value of a and b:");
            scanf("%f%f", &a, &b);
            sub = a - b;
            printf("The value of sub is %f", sub);
            break;
        case 3:
            printf("Enter the value of a and b:");
            scanf("%f%f", &a, &b);
            mul = a * b;
            printf("The value of multiplication is %f", mul);
            break;
        case 4:
            printf("Enter the value of a and b:");
            scanf("%f%f", &a, &b);
            div = a / b;
            printf("The value of div is %f", div);
            break;
        default:
            printf("Invalid operation");
    }
    return 0; 
}
