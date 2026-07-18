#include<stdio.h>
int power(int x,int y)
{
	int result=1;
	for(int i=1;i<=y;i++)
	{
		result*=x;
	}
	return result;
}
int main()
{
	int x,y;
	printf("Enter the base ");
	scanf("%d",&x);
	printf("Enter the exponent ");
	scanf("%d",&y);
	int bau=power(x,y);
	printf("The value of the %d^%d is:%d",x,y,bau);
	return 0;
}