/*
 * A C E G
 * B D F
 * C E
 * D
 */

#include<stdio.h>
void main(){

	for(int i =1; i<=4; i++){
		char ch ='A';
		if(i>1){
			ch=ch+i-1;
		}

		for(int j=4; j>=i; j--){
			printf("%c ",ch);
			ch=ch+2;
		}
		printf("\n");
	}
}
