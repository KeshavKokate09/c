/*
 * take rows from user
 * 0
 * 1 1
 * 2 3 5
 * 8 13 21 34
 * 
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter number of rows :\n");
	scanf("%d",&row);
	
	int pre=0,post=1,sum=0;

	for(int i=1; i<=row; i++){
		for(int j=4; j>=1; j--){
			if(i>=j){
				printf("%d ",pre);
				sum =pre+post;
				pre=post;
				post=sum;
			}
		}
		printf("\n");
	}
}
