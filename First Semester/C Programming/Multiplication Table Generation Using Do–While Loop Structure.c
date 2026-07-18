#include<stdio.h>
int main()
{
	int n,multi,i=1;
	printf("Enter the value of n:");
	scanf("%d",&n);
	do
	{
		multi=n*i;
		printf("The multiplication table is %d\n",multi);
		i++;
	}
	while(i<=10);
	printf("\nBIDUR KHANAL -> BATCH 2081");
	return 0;
}
