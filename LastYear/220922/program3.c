/*
 * 3 b 2 d
 * b 2 d
 * 1 d
 * d
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the number of rows :\n");
	scanf("%d",&row);

	int id=row;
	for(int i=1; i<=row; i++){
		int x=row-i;
		char ch=96+i;
		for(int j=row; j>=i; j--){
			if((i%2==0 && j%2!=0) || (i%2!=0 && j%2==0)){
				printf("%d ",x);
				x--;
			}else{
				printf("%c ",ch);
			}
			ch++;
		}
		printf("\n");
	}


}
