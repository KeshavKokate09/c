/*
 * WAP to print the table of 11 in reverse order
 */

#include<stdio.h>
void main(){
	int start=10;

	while(start>0){
		printf("11 * %d = %d \n",start,start*11);
		start--;
	}

}
