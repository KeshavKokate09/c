/*
0 3 8
15 24 35
48 63 80
*/

#include<stdio.h>
void main(){
	int n=1;
	for(int r=1; r<=3; r++){
		for(int c=1; c<=3; c++){
			printf("%d ",(n*n)-1);
			n++;
		}
		printf("\n");
	}
}
