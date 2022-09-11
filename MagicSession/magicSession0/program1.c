/*
 * WAP to print all the divisors of given number
 */

#include<stdio.h>
void main(){
	int input=0;
	scanf("%d",&input);

	for(int i=1; i<=input/2; i++){
		if(input%i==0){
			printf("%d  ",i);
		}
	}
}
