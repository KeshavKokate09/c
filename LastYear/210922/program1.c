/*
 * 2
 * 3 4 
 * 4 5 6
 * 5 6 7 8
 */


#include<stdio.h>
void main(){
	int row=0;
	printf("Enter number of rows :\n");
	scanf("%d",&row);

	for(int i=1; i<=row;i++){
		int x=1+i;
		for(int j=1; j<=i; j++){
			printf("%d ",x);
			x++;
		}
		printf("\n");
	}
}
