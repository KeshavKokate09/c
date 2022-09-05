/*
I H G
F E D
C B A 
*/
#include<stdio.h>
void main(){
	for(int r=1,ch=73; r<=3; r++){
		for(int c=1; c<=3;c++){
			printf("%c ",ch--);
		}
		printf("\n");
	}
}
