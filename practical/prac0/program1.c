/*
 * get the input and print it is leap year or not
 */

#include<stdio.h>

void main(){
	int year;
	printf("Enter The Year :\n");
	scanf("%d",&year);

	if(year%4==0 && year>0){
		printf("%d is leap year",year);
	}else{
		printf("%d is not leap year",year);		
	}
}
