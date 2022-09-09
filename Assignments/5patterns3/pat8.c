/*
1 4 27
4 27 16
27 16 125
*/

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the number of rows : \n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		int n=i;
		for(int j=1; j<=row; j++){
			if((i%2==0 && j%2!=0) || (j%2==0 && i%2!=0)){
				printf("%d ",n*n);
			}else{
				printf("%d ",n*n*n);
			}
			n++;
		}
		printf("\n");
	}
}
