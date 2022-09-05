/*
A B C D
B C D E
C D E F
D E F G
*/

#include<stdio.h>
void main(){
	for(int r = 1;r<=4; r++){
		int ch =64;
		ch = ch+r;
		for(int c=1; c<=4; c++){
			printf("%c ",ch++);
		}
		printf("\n");
	}
}
