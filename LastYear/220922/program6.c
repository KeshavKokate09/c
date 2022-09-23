/*
 * 1 2 3 4 5
 * 6 7 8 9 10
 * 12 18 20 21 24
 * 27 30 36 40 42
 * 45 48 50 54 60
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the no of rows:\n");
	scanf("%d",&row);
	int n=1;
	for(int i =1; i<=row; i++){
		for(int j=1; j<=row; j++){
			int sum=0;
			int x=n;
			while(x>0){
				sum=sum+(x%10);
				x/=10;
			}

			if(x%sum==0){
				printf("%d ",x);
			}
			n++;
		}
		printf("\n");
	}
}
