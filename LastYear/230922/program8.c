/*
 * WAP to print the count of digits in number
 */

#include<stdio.h>
void main(){
	int num=0;
	scanf("%d",&num);

	int count=0;
	while(num>0){
		num/=10;
		count++;
	}

	printf("The number of digits are : %d",count);
}
