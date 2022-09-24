/*
 *       D
 *     C D
 *   B C D
 * A B C D
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the rows :\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		char ch='A';
		char ch1='a';
		for(int j=row; j>=1; j--){
			if(j>i){
				printf("  ");
			}else{
				if(j%2!=0){
				
					printf("%c ",ch1);
				}else{

					printf("%c ",ch);
				}
			}
			ch++;
			ch1++;
		}
		printf("\n");
	}
}
