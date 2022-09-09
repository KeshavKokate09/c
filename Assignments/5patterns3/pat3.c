/*
4 a 3 b
4 a 3 b
4 a 3 b
4 a 3 b
*/

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the number of rows :\n");
	scanf("%d",&row);

	for(int i=1; i<=row;i++){
		int n=4;
		char ch='a';
		for(int j=1,x=1;j<=row;j++,x++){
			if(x%2==0){
				printf("%c ",ch);
				ch++;
			}else{
				printf("%d ",n);
				n--;
			}
		}
		printf("\n");
	}
}
