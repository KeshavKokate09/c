/*
D1 C2 B3 A4
e5 f4 g3 h2
F3 E4 D5 C6
g7 h6 i5 j4
*/

#include<stdio.h>
void main(){
	int row;
	printf("Enter the number of rows: \n");
	scanf("%d",&row);

	int n=1;
	for(int i=1; i<=row; i++){
		char ch='C'+i;
		for(int j=1; j<=row; j++){
			printf("%c%d ",ch,n);
			ch++;
			if(i%2!=0){
				n++;
			}else{
				n--;
			}
		}
		printf("\n");
	}
}
