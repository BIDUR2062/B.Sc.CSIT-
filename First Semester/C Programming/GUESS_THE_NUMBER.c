#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  
    int randomNumber; 
    randomNumber = rand() % 2 + 1;
int a;
printf("Guess the numbers:");
scanf("%d",&a);

    if(randomNumber==a)
    {
    	printf("congratulation");
	}
	else if(randomNumber<a)
{
	printf("You guessed the greater value");
	printf("\nThe correct value is:%d\n",randomNumber);
	
}
else
{
	printf("You guessed the lesser value");
	printf("\nThe correct value is:%d\n",randomNumber);
}

    return 0;
}

