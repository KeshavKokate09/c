/*
 * A B C D
 *   B C D
 *     C D
 *       D
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the rows :\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		char ch='A';
		for(int j=1; j<=row; j++){
			if(i>j){
				printf("  ");
			}else{
				printf("%c ",ch);
			}
			ch++;
		}
		printf("\n");
	}
}
