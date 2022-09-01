/*
 * get num from user and print the sum of series
 * if n= 5
 * then the sum = 9 + 99 + 999 + 9999 + 99999;
 */
#include<stdio.h>
void main(){
	int n=0, current=9, sum=0;
	scanf("%d",&n);

	for(int i =1, j=10; i<=n; i++,j*=10){
		printf("%d ",current);
		sum=sum+current;
		current=current+9*j;
	}
	printf("\n %d",sum);
}
