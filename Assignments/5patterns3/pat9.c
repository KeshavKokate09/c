/*
0 1 1 2
3 5 8 13
21 34 55 89
144 233 377 610
*/

#include<stdio.h>
void main(){
	int row=0;
	printf("Enter the number of rows :\n");
	scanf("%d",&row);

	int pre=0,crnt=1,sum=0;

	for(int i=1;i<=row; i++){
		for(int j=1; j<=row; j++){
			printf("%d ",pre);
			sum=crnt+pre;
			pre=crnt;
			crnt=sum;
		}
		printf("\n");
	}
}
