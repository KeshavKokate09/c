/*
 * WAP to print the reverse number
 */

#include<stdio.h>
void main(){
	int num=0;
	printf("Enter the num :\n");
	scanf("%d",&num);
	
	int sum=0;
	while(num>0){
		int digit =num%10;
		printf("%d",digit);
		num/=10;
	}
}
