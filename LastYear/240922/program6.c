/*
 * WAP to print the sum of digits
 */

#include<stdio.h>
void main(){
	int num=0;
	printf("Enter the num :\n");
	scanf("%d",&num);
	
	int sum=0;
	while(num>0){
		int digit =num%10;
		sum=sum+digit;
		num/=10;
	}

	printf("the sum of digit is :%d",sum);
}
