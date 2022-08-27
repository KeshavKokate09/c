/*
 * WAP to print first 10 3 digit numbers
 */

#include<stdio.h>
void main(){
	int start=0;
	printf("Enter the starting 3 digit number :\n");
	scanf("%d",&start);

	int i=1;
	while(i<=10){
		printf("%d \n",start);
		start++;
		i++;
	}

}
