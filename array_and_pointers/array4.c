/*
 * Get the array elements from user and print the same using for loop
 */
#include<stdio.h>
void main(){
	int arr[5];
	printf("Enter Array elements : \n");
	for(int i=0; i<5; i++){
		scanf("%d",&arr[i]);
	}
	printf("Array elements are : \n");
	for(int i=0; i<5; i++){
		printf("%d\n",arr[i]);
	}
}
