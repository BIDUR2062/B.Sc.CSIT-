#include<stdio.h>
#include<string.h>
struct details
{
	char name[50];
	int age;
	char  address[50];
	char father_name[50];
	char mother_name[50];
}b[5];
int main()
{
	int i;
	printf("Enter the given details:\n");
	for(i=0;i<1;i++)
	{
		printf("Enter your name:\n");
		scanf("%s",&b[i].name);
		printf("Enter your age:\n");
		scanf("%d",&b[i].age);
			printf("Enter your father name:\n");
		scanf("%s",&b[i].father_name);
			printf("Enter your mother name:\n");
		scanf("%s",&b[i].mother_name);
	}
	for(i=0;i<1;i++)
	{
		printf("Your name is:%s\n",b[i].name);
		printf("Your age is:%d\n",b[i].age);
		printf("Your father name is:%s\n",b[i].father_name);
		printf("Your mother name is:%s\n",b[i].mother_name);
	}
	return 0;
}