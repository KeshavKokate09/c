/*
 * get the array elements and print the sum of elements
 */

#include<stdio.h>
void main(){
	int arr[5];
	int sum=0;
	for(int i=0; i<5; i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("sum of Array elements are :%d\n",sum);
}
