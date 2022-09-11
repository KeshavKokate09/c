/*
 * take rows from user
 * E D C B A
 * E D C B
 * E D C
 * E D
 * E
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter number of rows :\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		char ch=64+row;
		for(int j=1; j<=row; j++){
			if(i<=j){
				printf("%c ",ch);
				ch--;
			}
		}
		printf("\n");
	}
}
