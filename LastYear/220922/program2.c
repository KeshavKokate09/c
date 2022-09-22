/*
 * 4 9 14 19
 * 8 14 20 26
 * 12 19 26 33
 * 16 24 32 40
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
			x=x+row+i;
		}
		printf("\n");
		id=id+row;
	}


}
