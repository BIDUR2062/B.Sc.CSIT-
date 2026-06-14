#include<stdio.h>
int recu(int n)
{
	if (n==0)
	{
		return 1;
	}
	return n*recu(n-1);
}
int main()
{
	int n;
	printf("Enter the positive number:");
	scanf("%d",&n);
	int fact=recu(n);
	printf("Factorial is:%d",fact);
	return 0;
}
