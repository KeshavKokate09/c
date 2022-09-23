/*
 * 0 1 1 2
 * 3 5 8
 * 13 21
 * 34
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the no of rows :\n");
	scanf("%d",&row);
	int pre=0, post=1,sum=0;

	for(int i=1; i<=row; i++){
		for(int j=row; j>=i; j--){
			printf("%d ",pre);
			sum=pre+post;
			pre=post;
			post=sum;
		}
		printf("\n");
	}
}

