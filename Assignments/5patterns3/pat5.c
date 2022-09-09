/*
1 4 3
16 5 36
7 64 9
*/

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter number of rows :\n");
	scanf("%d",&row);
	int n=1;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=row; j++){
			if((i%2==0 && j%2!=0) || (i%2!=0 && j%2==0)){
				printf("%d ",n*n);
			}else{
				printf("%d ",n);
			}
			n++;
		}
		printf("\n");
	}
}
