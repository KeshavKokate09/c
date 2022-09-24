/*
 * a
 * b c
 * d e f
 * g h
 * i
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the rows :\n");
	scanf("%d",&row);
	char ch='a';
	for(int i=1; i<=row; i++){
		int n=1;
		if(i<=row/2+1){
			for(int j=1;j<=i; j++){
				printf("%c ",ch++);
			}
		}else{
			for(int j=i; j<=row; j++){
				printf("%c ",ch++);
			}
		}
		printf("\n");
	}
}
