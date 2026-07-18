#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of the three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("The first given number is largest");
	}
	else if(b>a && b>c)
	{
		printf("The second given number is the largest");
	}
	else
	{
		printf("The third given number is the largest");
	}
	printf("\nBIDUR KHANAL -> BATCH 2081");
	return  0;
}
