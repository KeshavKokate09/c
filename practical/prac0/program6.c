/*
 * get 10 values from user and print the sum and average
 */

#include<stdio.h>
void main(){
	int sum=0;
	for(int i=1; i<=10; i++ ){
		int temp;
		printf("Enter the num (%d) : \n",i);
		scanf("%d",&temp);

		sum=sum+temp;
	}
	printf("%d and %d are the total sum and average respectively",sum,sum/10);

}
