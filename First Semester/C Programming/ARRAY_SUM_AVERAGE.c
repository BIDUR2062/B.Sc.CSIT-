
#include<stdio.h>
int main()
{
	float avg,arr[10],sum=0;
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%f",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+arr[i];
		
	}
	avg=sum/10;
	{
		printf("%f\n",sum);
		printf("%f\n",avg);
	
	}
	return 0;
	
}
