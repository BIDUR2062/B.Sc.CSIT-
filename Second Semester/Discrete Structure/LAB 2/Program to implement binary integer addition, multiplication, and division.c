#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t binary_add(uint32_t a,uint32_t b){
    uint32_t carry;
    while(b!=0){
        carry=a&b;
        a=a^b;
        b=carry<<1;
    }
    return a;
}

uint32_t binary_multiply(uint32_t a,uint32_t b){
    uint32_t result=0;

    while(b>0){
        if(b&1){
            result=binary_add(result,a);
        }
        a=a<<1;
        b=b>>1;
    }

    return result;
}

void binary_divide(uint32_t dividend,uint32_t divisor,uint32_t *quotient,uint32_t *remainder){
    if(divisor==0){
        printf("Error: Division by zero\n");
        *quotient=0;
        *remainder=0;
        return;
    }

    *quotient=0;
    *remainder=0;

    for(int i=31;i>=0;i--){
        *remainder=*remainder<<1;
        *remainder=*remainder|((dividend>>i)&1);

        if(*remainder>=divisor){
            *remainder=*remainder-divisor;
            *quotient=*quotient|(1<<i);
        }
    }
}

int main(){
    uint32_t a,b;

    printf("Enter two positive integers for binary operations:\n");
    printf("a = ");
    scanf("%u",&a);
    printf("b = ");
    scanf("%u",&b);

    uint32_t sum=binary_add(a,b);
    printf("\nBinary Addition:\n");
    printf("%u + %u = %u\n",a,b,sum);

    uint32_t product=binary_multiply(a,b);
    printf("\nBinary Multiplication:\n");
    printf("%u * %u = %u\n",a,b,product);

    uint32_t quotient,remainder;
    binary_divide(a,b,&quotient,&remainder);

    printf("\nBinary Division:\n");
    printf("%u / %u = %u with remainder %u\n",a,b,quotient,remainder);

    return 0;
}