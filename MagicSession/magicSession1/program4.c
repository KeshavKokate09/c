/*WAP to the array elements in reverse order
Take array size and array elements from the user
IP : enter array : 10 12 13 15 16 14
Op: 14 16 15 13 12 10*/

#include<stdio.h>
void main(){
	int size=0;
	printf("Enter the size of array : \n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the array elements :\n");
	
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
	int rArr[size];

	int oddC=0,evenC=0;
	for(int i=0; i<size; i++){
		rArr[i]=arr[(size-1)-i];
		printf("%d ",rArr[i]);
	}
}
