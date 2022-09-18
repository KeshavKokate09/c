/*WAP to add two different arrays of the same size
Take array size and array elements from the user
IP : enter 1 st array : 1 0 1 2 1 3 1 5
Ip : enter 2nd array: 1 2 3 4
Op: 11 1 4 1 6 1 9*/

#include<stdio.h>
void main(){
	int size=0;
	printf("Enter the size of array1 : \n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the array elements1 :\n");
	
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}

	int arr1[size];
	printf("Enter the array elements1 :\n");
	
	for(int i=0; i<size; i++){
		scanf("%d",&arr1[i]);
	}
	
	int op[size];
	for(int i=0; i<size; i++){
		op[i]=arr[i]+arr1[i];
		printf("%d ",op[i]);
	}
}
