/*
 * 4 5 6 7
 * 8 10 12 14
 * 12 15 18 21
 * 16 20 24 28
 *
 *
 * 3 4 5
 * 6 8 10
 * 9 12 15
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the number of rows :\n");
	scanf("%d",&row);

	int id=row;
	for(int i=1; i<=row; i++){
		int x=id;
		for(int j=1; j<=row; j++){
			printf("%d ",x);
			x=x+i;
		}
		printf("\n");
		id=id+row;
	}


}
