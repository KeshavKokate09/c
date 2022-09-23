/*
 *  5 
 *  5 d 
 *  5 d 4 
 *  5 d 4 b 
 *  5 d 4 b 3
 *
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the no of rows :\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		char ch ='a'+row-1;
		int n=row;
		for(int j=1; j<=i; j++){
			if(j%2!=0){
				printf("%d ",n--);	
			}else{
				printf("%c ",ch);
			}
			ch--;
		}
		printf("\n");
	}
}
