/*
 * take rows from user
 *       1  
 *     1 2
 *   1 2 3
 * 1 2 3 4
 * 
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter number of rows :\n");
	scanf("%d",&row);
	
	int pre=0,post=1,sum=0;

	for(int i=1; i<=row; i++){
		int n=1;
		for(int j=4; j>=1; j--){
			if(i<j){
				printf("  ");
			}else{
				printf("%d ",n);
				n++;
			}
		}
		printf("\n");
	}
}
