/*
 * WAP to take input and print the sum of digits
 */

#include<stdio.h>
void main(){
	int input=0,sum=0;
	printf("Enter the number :\n");
	scanf("%d",&input);

	while(input>0){
		sum = sum + (input%10);
		input = input/10;
	}

	printf("Sum of digits is %d",sum);
}
