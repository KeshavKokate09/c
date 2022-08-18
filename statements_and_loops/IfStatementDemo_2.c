#include<stdio.h>

void main(){
	char ch1='A';
	char ch2=48;

	if(ch1){
		printf("if block when ch=A\n");
	}
	
	if(ch2){
		printf("if block when ch=48\n");
	}
}
/*
 * conclusion : if() dosent require allways condition it requires a boolean value 
 * in c 0 is considered as false and other than zero all considered as true
 * the above line char ch2 = 48; is compiled with char '0' while checking if condition treated as value 48 so its return the value true
 */
