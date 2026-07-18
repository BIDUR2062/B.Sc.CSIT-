#include<stdio.h>
void check(int n)
{
	if(n%2==0)
	{
		printf("The Given Number is even");
	}
	else
	{
		printf("The Given Number is odd");
	}
}
int main()
{
	int n;
	printf("Enter the Number : ");
	scanf("%d",&n);
	check(n);
	printf("\nBIDUR KHANAL -> BATCH 2081");
	return 0;
}

