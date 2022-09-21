/*
 * a 
 * b B 
 * c C c
 * d D d D
 */


#include<stdio.h>
void main(){
	int row=0;
	printf("Enter number of rows :\n");
	scanf("%d",&row);

	for(int i=1; i<=row;i++){
		char ch ='A'+i-1;
		char ch1 ='a'+i-1;
		for(int j=1; j<=i; j++){
			if(j%2==0){
				printf("%c ",ch);
			}else{
				printf("%c ",ch1);
			}
		}
		printf("\n");
	}
}
