
#include<stdio.h>
int main()
{
	int i,j,sum[2][2];
	int matrix1[2][2],matrix2[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&matrix1[i][j]);
		}
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}
		printf("The value of sum of the two matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
