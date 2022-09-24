/*
 * 1
 * 1 2
 * 1 2 3
 * 1 2 3 4
 * 1 2 3
 * 1 2
 * 1
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the rows :\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		int n=1;
		if(i<=row/2+1){
			for(int j=1;j<=i; j++){
				printf("%d ",n++);
			}
		}else{
			for(int j=i; j<=row; j++){
				printf("%d ",n++);
			}
		}
		printf("\n");
	}
}
