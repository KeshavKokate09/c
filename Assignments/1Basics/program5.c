/*
 * WAP to print Asci values from 0 to 127
 */

#include<stdio.h>
void main(){
	int start=1;

	while(start<128){
		printf("%c = %d\n",start,start);
		start++;
	}

}
