#include<stdio.h>
#include<string.h>
struct student{
char name[30];
int roll_no;
float marks;	
}s[5];
int main()
{
	int n;
	printf("Enter the number of the student : ");
	scanf("%d",&n);
	printf("Enter the name,roll_no,marks of the student : ");
	for(int i=0;i<n;i++)
	{
		scanf("%s%d%f",&s[i].name,&s[i].roll_no,&s[i].marks);
	}
	for(int i=0;i<n;i++)
	{
		printf("The student details is\nName:%s\nRoll_no:%d\nMarks:%f\n",s[i].name,s[i].roll_no,s[i].marks);
	}
	printf("\nBIDUR KHANAL -> BATCH 2081");
	return 0;
}
