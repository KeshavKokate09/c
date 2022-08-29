i/*
 * WAP to print the addition of 1 to 10 with 10 to 1
 *
 * 1 +10 = 11
 * 2+ 9=11
 */

#include<stdio.h>
void main(){
	int num=10;
	for(int i=1; i<=10; i++){
		printf("%d + %d = %d",i,num,i+num);
		num--;
	}

}
