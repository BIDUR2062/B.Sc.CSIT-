#include<stdio.h>
int main()
{
	int n=5;
	int *ptr;
	ptr=&n;
	printf("The value before increment:%p",ptr);
	ptr++;
	printf("The value after the increment:%p",ptr);
	return 0;
}