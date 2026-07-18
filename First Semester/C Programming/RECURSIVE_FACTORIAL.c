#include<stdio.h>
int fact(int n)
{
	if (n==0)
	{
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
int main()
{
	int number,n;
	printf("Enter the positive number:");
	scanf("%d",&number);
	int a=fact(number);
	printf("The factorial of the %d is %d",number,a);
	return 0;
}