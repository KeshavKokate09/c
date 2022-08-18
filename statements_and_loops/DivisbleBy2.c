/*
 * get value from user and print the value is divisible by 2 or not
 */

#include<stdio.h>

void main(){
	int userInput;
	printf("Enter the value\n");
	scanf("%d", &userInput);

	if(userInput>0){
		if(userInput % 2 == 0){
			printf("%d is divisible by 2",userInput);
		}else {
			printf("%d is not divisible by 2",userInput);	
		}
	}

}
