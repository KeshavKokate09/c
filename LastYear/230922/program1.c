/*
 *  A B C D
 *    A B C
 *      A B
 *        A
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the no of rows :\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		char ch ='A';
		for(int j=1; j<=row; j++){
			if(i>j){
				printf("  ");
			}else{
				printf("%c ",ch++);
			}
		}
		printf("\n");
	}
}
