//WAP to calculate the factorial of a given number

#include<stdio.h>

void main(){
	int input=0;
	printf("Enter the number : \n");
	scanf("%d",&input);

	int fact=1;
	for(int i=input; i>=1; i--){
		fact=fact*i;
	}
	printf("Factorial of %d = %d",input,fact);
}
