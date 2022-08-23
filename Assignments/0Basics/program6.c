/*
Write a program to check if a number is even or odd. Take all the values
from the user
Input: var=10;
Output: 10 is an even no
Input: var=37;
Output: 37 is an odd no

*/
#include<stdio.h>
void main(){
	int input;
	printf("Enter th input :\n");
	scanf("%d",&input);

	if(input%2==0){
		printf("%d is an even number",input);
	}else{
		printf("%d is an odd number",input);

	}
}
