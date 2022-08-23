/*
Write a program, take a number and print whether it is positive or
negative. Take all the values from the user
Input: var=5
Output: 5 is a positive number
Input: var=-9
Output: -9 is a negative number
*/
#include<stdio.h>
void main(){
	int input;
	printf("Enter a Int Input :\n");
	scanf("%d",&input);


	if(input>0){
		printf("You enter a positive num : %d\n",input);
	}else if(input<0){
		printf("You enter a Negative num : %d\n",input);
	}else{
		printf("You enter non negative and positive number\n");
	}
}
