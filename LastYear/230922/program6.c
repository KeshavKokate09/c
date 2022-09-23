/*
 * WAP to print the number is perfect or not
 */

#include<stdio.h>
void main(){
	int num=0;
	printf("Enter the num :\n");
	scanf("%d",&num);

	int sum=0;
	for(int i=1; i<=num/2; i++){
		if(num%i==0){
			sum=sum+i;
		}
	}

	if(num == sum){
		printf("The number is a perfect number");
	}else{
		printf("The number not a perfect number");
	}
}
