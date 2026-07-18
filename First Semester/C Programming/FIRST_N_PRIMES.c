#include<stdio.h>
int main()
{
	int i=3,n,num,count;
	printf("Enter the value of n");
	scanf("%d",&n);
	if(n>=1)
	{
		printf("2\n");
	}
	for(count=2;count<=n;i++)
	{
		for(num=2;num<=i;num++)
		{
			if(i%num==0)
			{
				break;
			}
		}
		if(i==num)
		{
			printf("%d\n",i);
			count++;
		}
	}
	return 0;
}
