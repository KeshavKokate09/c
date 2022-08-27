/*
 * WAP to print the sum of first 10odd numbers
 */

#include<stdio.h>
void main(){
	int start=1;
	int count=1,sum=0;
	while(count<=10){
		if(start%2==1){
			sum=sum+start;
			count++;
			printf("Odd number : %d\n",start);
		}
		start++;
	}
	printf("%d",sum);

}
