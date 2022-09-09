/*
a B c D
b C d E
c D e F
d E f G
*/

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter a number of rows: \n");
	scanf("%d",&row);

	for(int i =1; i<=row; i++){
		int ch=96+i,ch2=64+i;
		for(int j=1; j<=row; j++){
			if(j%2==0){
				printf("%c ",ch2);
			}else{
				printf("%c ",ch);
			}
			ch++;
			ch2++;
		}
		printf("\n");
	}
}
