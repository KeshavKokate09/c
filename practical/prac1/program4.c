/*
 * WAP to take number as input and and print is it prime or not
 */

#include<stdio.h>
void main(){
	int input=0;
	printf("Enter the num :\n");
	scanf("%d",&input);

	int count=0;
	for(int i =2; i<=input/2; i++){
		if(input%i==0){
			count++;
			break;
		}
	}

	if(count ==1){
		printf("%d is not a prime number",input);
	}else {
		printf("%d is a prime number",input);
	}
}
