/*
 * pruint no of days in te given month
 */

#include<stdio.h>
void main(){
	int month;
	printf("Enter a month number:\n");
	scanf("%d",&month);

	switch(month){
		case 1 :
			printf("No of days 31\n");
			break;
		case 2 :
			printf("No of days 28 or 29if the year i leap\n");
			break;
		case 3 :
			printf("No of days 31\n");
			break;
		case 4 :
			printf("No of days 30\n");
			break;
		case 5 :
			printf("No of days 31\n");
			break;
		case 6 :
			printf("No of days 30\n");
			break;
		case 7 :
			printf("No of days 31\n");
			break;
		case 8 :
			printf("No of days 31\n");
			break;
		case 9 :
			printf("No of days 30\n");
			break;
		case 10 :
			printf("No of days 31\n");
			break;
		case 11 :
			printf("No of days 30\n");
			break;
		case 12 :
			printf("No of days 31\n");
			break;
		default :
			printf("Wrong input");
	}

}
