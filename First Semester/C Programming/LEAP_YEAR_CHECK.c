#include <stdio.h>
int main()
{
	int year;
	printf("Enter the year:\n");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("The year is leap");
	}
	else if(year%100==0)
	{
		printf("The year is not leap");
	}
	else if(year%4==0)
	{
		printf("The year is leap");
	}
	else
	{
		printf("The year is not leap");
	
	}
	return 0;
}
