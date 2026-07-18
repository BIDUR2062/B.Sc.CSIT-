#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="HELLO";
	char b[]="APPLE";
	char c[]="CLASS";
	printf("%d",strcmp(a,b));
	printf("%d",strcmp(b,a));
	printf("%d",strcmp(c,a));
	return 0;
}