/* 1
 * 1 2
 * 2 3 4 
 * 4 5 6 7
 * 7 8 9 10 11
 */


#include<stdio.h>
void main(){
	int row=0;
	printf("Enter number of rows :\n");
	scanf("%d",&row);
	int x=2;
	for(int i=1; i<=row;i++){
		x--;
		for(int j=1; j<=i; j++){
			printf("%d ",x);
			x++;
		}
		printf("\n");
	}
}
