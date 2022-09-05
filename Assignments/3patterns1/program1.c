/*
1 2 3 4
2 3 4 5
3 4 5 6
4 5 6 7
*/
#include<stdio.h>
void main(){
	for(int r = 1; r<=4; r++){
		int x=r;
		for(int c = 1; c<=4; c++){
			printf("%d ",x);
			x++;
		}
		printf("\n");
	}
}
