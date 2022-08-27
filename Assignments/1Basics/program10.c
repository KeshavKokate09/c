ii/*
 * WAP to print the sum of first 10odd numbers
 */

#include<stdio.h>
void main(){
	int start=1;
	int count=1,prod=1;
	while(count<=10){
		prod=prod*start;
		count++;	
	   	start++;
	}
	printf("%d",prod);
}
