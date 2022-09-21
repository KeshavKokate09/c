/*
 * 1 4 7 10 
 * 7 10 13 16
 * 13 16 19 22
 * 19 22 25 28
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the noof rows :\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		int x=-5+(6*i);
		for(int j=1; j<=row; j++){
			printf("%d ",x);
			x=x+3;
		}
		printf("\n");
	}
}
