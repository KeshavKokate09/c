/*
 * 2 3 5
 * 7 11 13
 * 17 19 23
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the no of rows :\n");
	scanf("%d",&row);

	int x=2;
	for(int i=1; i<=row; i++){
		for(int j=1; j<=row;){
			int flag=0;
			for(int k=2; k<=x; k++){
				if(x%k==0){
					flag++;
				}
			}

			if(flag==1){
				printf("%d ",x);
				j++;
			}
			x++;
		}
		printf("\n");

	}
}
