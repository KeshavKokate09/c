/*
 *     1
 *    1 2
 *   1 2 3
 *  1 2 3 4
 * 1 2 3 4 5
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the rows :\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		int n=1;
		for(int j=row; j>=1; j--){
			if(j>i){
				printf(" ");
			}else{
				printf("%d ",n++);
			}
		}
		printf("\n");
	}
}
