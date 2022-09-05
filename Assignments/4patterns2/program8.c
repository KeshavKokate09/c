/*
18 16 14
12 10 8
6 4 2
*/

#include<stdio.h>
void main(){
	int n=18;
	for(int r=1; r<=3; r++){
		for(int c=1; c<=3; c++){
			printf("%d ",n);
			n-=2;
		}
		printf("\n");
	}
}
