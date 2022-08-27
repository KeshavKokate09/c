/*
 * WAP to print first 10 capital Alphabets
 */

#include<stdio.h>
void main(){
	int start=1;

	while(start<=100){
		if(start%2==0){
			printf("%d \n",start);
		}
		start++;
	}

}
