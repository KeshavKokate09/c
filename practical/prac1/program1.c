/*
 * WAP to print the sum of numbers wich is not divisible by 3 uto given number
 */

#include<stdio.h>
void main(){
	int input=0;
	printf("Enter the num; \n");
	scanf("%d",&input);

	int sum=0;
	for(int i=0; i<=input; i++){
		if(i%3!=0){
			sum = sum+i;
		}
	}

	printf("%d is the sum of numbers wich are not divisible by 3",sum);
}
