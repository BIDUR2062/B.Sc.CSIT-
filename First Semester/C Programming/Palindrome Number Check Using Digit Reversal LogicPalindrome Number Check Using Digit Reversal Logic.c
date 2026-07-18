#include<stdio.h>
int main()
{
	int temp,n,r,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
	printf("\nBIDUR KHANAL -> BATCH 2081");
	return 0;
}

