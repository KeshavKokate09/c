/*
 *      *
 *     **
 *    ***
 *   ****
 *  *****
 */

#include<stdio.h>
void main(){

	for(int i=5; i>=1; i--){
		for(int j=1;j<=5 ; j++){
			if(i<=j){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("--------------Dry run--------------------\n");
	printf("i  i>=1  j  j<=5  i<=j  print()  i++  j++  \n");
	printf("-----------------------------------------\n");
	
	for(int i=5; i>=1; i--){
		for(int j=1;j<=5 ; j++){
			if(i<=j){
				printf("%d  %d>=1  %d  %d<=5  %d<=%d    \"*\"    %d    %d  \n",i,i,j,j,i,j,i,j);
				
			}else{
				printf("%d  %d>=1  %d  %d<=5  %d<=%d    \" \"    %d    %d  \n",i,i,j,j,i,j,i,j);
			}
		}
	}


}
