#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mult(int a, int b)
{
	return a*b;
}
int main()
{
	int a,b;
	printf("Enter the value of a and b : ");
	scanf("%d%d",&a,&b);
	printf("The added value of this number is:%d\n",add(a,b));
	printf("The subtracted value of this number is:%d\n",sub(a,b));
	printf("The  multiplication of this number is:%d\n",mult(a,b));
	printf("\nBIDUR KHANAL -> BATCH 2081");
	return 0;
	
}