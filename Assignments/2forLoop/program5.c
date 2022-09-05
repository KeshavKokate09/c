//WAP to take the Number input and print all the factors of that number.

#include<stdio.h>
void main(){
	int input=0;
	printf("Enter a Number :\n");
	scanf("%d",&input);

	for(int i=1;i<=input;i++){
		if(input % i == 0){
			printf("%d ",i);
		}
	}
}
