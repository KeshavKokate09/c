/*
 * WAP to print the count of numbers in a given number
 */

#include<stdio.h>
void main(){
	int input=0;
	printf("Enter the Input : \n");
	scanf("%d",&input);
	int count=0;

	while(input!=0){
		input=input/10;
		count++;
	}

	printf("The total number of digits is %d",count);
}
