/*
= = = = = =
$ $ $ $ $ $
@ @ @ @ @ @
= = = = = =
$ $ $ $ $ $
@ @ @ @ @ @
*/

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the number of row :\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		for(int j=1; j<=row; j++){
			if(i%3==1){
				printf("= ");
			}else if(i%3==2){
				printf("$ ");
			}else{
				printf("@ ");
			}
		}
		printf("\n");
	}
}
