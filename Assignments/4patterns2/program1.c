/*
4 3 2 1
5 4 3 2
6 5 4 3
7 6 5 4
*/
#include<stdio.h>
void main(){
	for(int r = 1; r<=4; r++){
		int x=3+r;
		for(int c = 1; c<=4; c++){
			printf("%d ",x);
			x--;
		}
		printf("\n");
	}
}
