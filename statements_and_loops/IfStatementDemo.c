/*
 * get the Charecter from user and prith is it in the form of UpperCase or LowerCase
 */

#include<stdio.h>

void main(){
	char userInput;
	printf("Enter the charcter \n");
	scanf("%c",&userInput);

	if(userInput>='A' && userInput<='Z'){
		printf("You enter the UpperCase character");
	}
	
	if(userInput>='a' && userInput<='z'){
		printf("You enter the LowerCase character");
	}
}
