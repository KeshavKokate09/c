/*
 * * - - - 
 * - * - -
 * - - * -
 * - - - *
 * get the rows from user
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the number of rows :\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int j=1;j<=row; j++){
			if(i == j){
				printf("* ");
			}else{
				printf("- ");
			}
		}
		printf("\n");
	}
}
