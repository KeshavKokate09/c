/*
1 3 5
7 9 11
13 15 17
*/

#include<stdio.h>
void main(){
	int n=1;
	for(int r=1; r<=3; r++){
		for(int c=1; c<=3; c++){
			printf("%d ",n);
			n+=2;
		}
		printf("\n");
	}
}
