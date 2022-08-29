/*
 * WAPto take the input and print it in reverse order
 */

#include<stdio.h>
void main(){
	int input=0;
	printf("Enter a number : \n");
	scanf("%d",&input);

	while(input>0){
		printf("%d",input%10);
		input = input/10;
	}
}
