#include<stdio.h>
int main()
{
	float c,f;
	int temp;
	printf("If you want to covert celsius into fahrenheit  press 1 other wise to convert the vice versa press 2:");
	scanf("%d",&temp);
	switch(temp)
	{
		case 1:
		printf("The value which you want ot convert into fahrenheit  is:");
		scanf("%f",&c);
		f=(18*c/10)+32;
		printf("The converted value in fahrenheit is %f",f);
		break;
		case 2:
		printf("The value which you want to covert into celsius is:");
		scanf("%f",&f);
		c=(10*f-320)/18;
		printf("The coverted value in celsius is %f",c);
		break;
	}
	return 0;
}


