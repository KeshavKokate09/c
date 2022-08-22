/*
 * *
 * **
 * ***
 * ****
 * *****
 */

#include<stdio.h>
void main(){

	for(int i=1; i<=5; i++){
		for(int j=5;j>=1 ; j--){
			if(i>=j){
				printf("*");
			}
		}
		printf("\n");
	}

	printf("--------------Dry run--------------------\n");
	printf("i  i>=1  j  j<=5  i<=j  print()  i++  j++  \n");
	printf("-----------------------------------------\n");
	
	for(int i=1; i<=5; i++){
		for(int j=5;j>=1 ; j--){
			if(i>=j){
				printf("%d  %d>=1  %d  %d<=5  %d<=%d    \"*\"    %d    %d  \n",i,i,j,j,i,j,i,j);
				
			}
		}
	}


}
