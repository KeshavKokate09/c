/*
 *  3 d 2 c
 *    d 2 c
 *      1 d
 *        d
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the no of rows :\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		char ch ='a'+row-1;
		int n=row-1;
		if(i>2){
			ch++;
			n--;
		}
		for(int j=1; j<=row; j++){
			if(i>j){
				printf("  ");
				if(j%2!=0){
					n--;
				}else{
					ch--;
				}
				
			}else{
				if(j%2!=0){
					printf("%d ",n--);
				}else{
					printf("%c ",ch--);
				}
			}
		}
		printf("\n");
	}
}
