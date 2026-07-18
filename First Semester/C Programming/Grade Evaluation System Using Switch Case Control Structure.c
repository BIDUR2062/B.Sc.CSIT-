#include <stdio.h>
int main()
{
	 int grade;
	 printf("Enter the grade of the student:");
	 scanf("%c",&grade);
	 switch(grade)
	 {
	 	case'A':
	 		printf("Excellent");
	 		break;
	 		case'B':
	 		 printf("Very good");
	 		break;
	 		case'C':
	 			printf("good");
	 			break;
	 			case'D':
	 			printf("Need Improvement");
	 			break;
	 			case'E':
	 				printf("Failed");
	 				break;
	 				default:
	 					printf("Invalid grade");
	 				}
	 				printf("\nBIDUR KHANAL -> BATCH 2081");
	 				return 0;
	 			
	 				
	 
}
