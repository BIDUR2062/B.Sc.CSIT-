#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=(sum+r);
		n=n/10;
	}
		printf("The sum of digit is %d",sum);
		printf("\nBIDUR KHANAL -> BATCH 2081");
		return  0;
}

