/*
 *  a
 *  a b
 *  a b c 
 *  a b c d 
 *  a b c
 *  a b
 *  a
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the no of rows :\n");
	scanf("%d",&row);
	int n=row/2;
	for(int i=1; i<=row; i++){
		char ch ='a';
		for(int j=1; j<=row/2+1; j++){
			if(j<=i){
				if(i>row/2+1){
					if(j<=n){
						printf("%c ",ch++);
						n--;
					}
				}else{
					printf("%c ",ch++);
				}
			}
		}
		printf("\n");
	}
}
