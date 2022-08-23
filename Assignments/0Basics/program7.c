/*
Write a program, take a number and print whether it is less than 10 or greater
than 10. Take all the values from the user
Input: var=5
Output: 5 Is Less than 10.
Input: var=16
Output: 16 Is greater than 10
*/
#include<stdio.h>
void main(){
	int input;
	printf("Enter th input :\n");
	scanf("%d",&input);

	if(input>10){
		printf("%d is greater than 10",input);
	}else if(input<10){
		printf("%d is smaller than 10",input);
	}else{
		printf("value is 10");
	}
}
