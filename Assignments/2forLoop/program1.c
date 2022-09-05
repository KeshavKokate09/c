//WAP a program to see a given number is a multiple of 3
#include<stdio.h>

void main(){
	int input=0;
	printf("Enter the Number :\n");
	scanf("%d",&input);

	if(input % 3 == 0){
		printf("%d is a multiple of 3",input);
	}else{
		printf("%d is NOT a multiple of 3",input);
	}
}
