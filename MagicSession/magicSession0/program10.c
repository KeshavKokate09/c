/*
 * take rows from user
 * D D D D
 *   C C C
 *     B B
 *       A
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter number of rows :\n");
	scanf("%d",&row);

	char ch='A'+row-1;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=row; j++){
			if(i<=j){
				printf("%c ",ch);
			}else{
				printf("  ");
			}

		}
		printf("\n");
		ch--;
	}
}
