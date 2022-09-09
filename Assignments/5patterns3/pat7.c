/*
16 15 14 13
L K J I
8 7 6 5
D C B A
*/

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter number of rows :\n");
	scanf("%d",&row);

	int n = row*row;
	int ch=64+n;

	for(int i=1,x=row;i<=row;i++,x--){
		for(int j=1; j<=row; j++){
			if(x%2==0){
				printf("%d ",n);
			}else{
				printf("%c ",ch);
			}
			ch--;
			n--;
		}
		printf("\n");
	}
}
