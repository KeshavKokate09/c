/*
A B C
D E F
G H I
*/
#include<stdio.h>
void main(){
	for(int r=1,ch=65; r<=3; r++){
		for(int c=1; c<=3;c++){
			printf("%c ",ch++);
		}
		printf("\n");
	}
}
