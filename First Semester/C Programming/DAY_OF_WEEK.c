#include<stdio.h>
int main()
{
	int day;
	printf("Enter the values of days");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("sunday");
			break;
			case 2:
				printf("monday");
				break;
				case 3:
					printf("tuesday");
					break;
					case 4:
						printf("wednesday");
						break;
						case 5:
							printf("thusday");
							break;
							case 6:
								printf("friday");
								break;
								case 7:
								printf("saturday");
								break;
								default:
									printf("Invalid days");
							}
							return 0;
}



