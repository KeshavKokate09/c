/*
 2 5 10
17 26 37
50 65 82
*/

#include<stdio.h>
void main(){
	int n=1;
	for(int r=1; r<=3; r++){
		for(int c=1; c<=3; c++){
			printf("%d ",(n*n)+1);
			n++;
		}
		printf("\n");
	}
}
