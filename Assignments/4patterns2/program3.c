/*
4 4 4 4
3 3 3 3
2 2 2 2
1 1 1 1
*/

#include<stdio.h>
void main(){
	for(int r=4; r>=1; r--){
		for(int c =1; c<=4; c++){
			printf("%d ",r);
		}
		printf("\n");
	}
}
