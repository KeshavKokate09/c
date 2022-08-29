/*
 * WAP take input and print the product of digit 
 */

#include<stdio.h>
void main(){
	int input=0, product=1;
	printf("Enter the number :\n");
	scanf("%d",&input);

	while(input>0){
		int temp = input % 10;
		product = product*temp;
		input =input/10;
	}

	printf("products of number : %d",product);
}
