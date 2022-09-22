/*
 * 1 b 2 d
 *   1 b 2
 *     1 b
 *       1
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the number of rows :\n");
	scanf("%d",&row);

	int id=row;
	for(int i=1; i<=row; i++){
		int x=1;
		char ch='a';
		for(int j=1; j<=row; j++){
			if(i>j){
				printf("  ");
			}else{
				if((i%2==0 && j%2!=0)||(i%2!=0 && j%2==0)){
					printf("%c ",ch);
				}else{
					printf("%d ",x);
					x++;
				}
				ch++;
			}
		}
		printf("\n");
	}


}
