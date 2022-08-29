/*
 * WAP take a number and print the number digits in it
 */

#include<stdio.h>
void main(){
	int input=0,count=0;
	printf("Enter a number :\n");
	scanf("%d",&input);

	while(input>0){
		input%10;
		count++;
		input=input/10;
	}
	printf("%d number of digits",count);
}
