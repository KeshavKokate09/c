/*
3 b 1 d
a 2 c 0
3 b 1 d
a 2 c 0
*/

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter number ofRows :\n");
	scanf("%d",&row);
	for(int i=1; i<=row; i++){
		int n=row-1;
		char ch ='a';
		for(int j=1;j<=row;j++){
			if((i%2==0 && j%2!=0) || (i%2!=0 && j%2==0)){
				printf("%c ",ch);
			}else{
				printf("%d ",n);
			}
			ch++;
			n--;
		}
		printf("\n");
	}
}
