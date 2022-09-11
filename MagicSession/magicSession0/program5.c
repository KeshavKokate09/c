/*
 * get rows from user
 *
 * 2 3 5
 * 7 11 13
 * 17 19 13
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter number of rows :\n");
	scanf("%d",&row);
	int n=2;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=row;){
			int count=0;
			for(int k=2; k<=n; k++){
				if(n%k==0){
					count++;
				}
			}
			if(count>1){
				n++;
				
			}else{
				j++;
				printf("%d ",n);
				n++;
			}
		}
		printf("\n");
	}
}
