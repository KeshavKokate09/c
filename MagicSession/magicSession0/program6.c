/*
 * take rows from user
 * D e F g
 * e D b C
 * F g H i
 * g F e D
 */

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter number of rows :\n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		char ch='C'+i;
		char ch1='c'+i;
		for(int j=1; j<=row; j++){
			if((i%2==0 && j%2!=0) || (i%2!=0 && j%2==0)){
				printf("%c ",ch1);
			}else{
				printf("%c ",ch);
			}

			if(i%2!=0){
				ch++;
				ch1++;
			}else{
				ch--;
				ch1--;
			}

		}
		printf("\n");
	}
}
