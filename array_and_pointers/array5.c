/*
 * get the array elements and print the count of elements wich are divisibe by 2
 */

#include<stdio.h>
void main(){
	int arr[5];
	for(int i=0; i<5; i++){
		scanf("%d",&arr[i]);
	}
	printf("Array elements wich are divisible by 2 :\n");
	for(int i=0; i<5; i++){
		if(arr[i]%2 == 0)
			printf("%d\n",arr[i]);
	}
}
