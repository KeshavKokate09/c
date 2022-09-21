/*
 * print the factorial of given number
 */

#include<stdio.h>
void main(){
	int num=0;
	printf("Enter the number :\n");
	scanf("%d",&num);

	int fact=1;

	while(num>1){
		fact=fact*num;
		num--;
	}

	printf("The factorial of given number is %d\n",fact);
}
