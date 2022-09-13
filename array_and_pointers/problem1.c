/*
 * get array from user then search element and print it is it present or not
 */

#include<stdio.h>
void main(){
	int size=0;
	printf("Enter the size of An Array :\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter an Array Elements :\n");
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}

	printf("Enter the search element :\n");
	int searchElement=0;
	scanf("%d",&searchElement);

	int flag=0;
	for(int i=0; i<size; i++){
		if(arr[i] == searchElement){
			flag=1;
			break;
		}
	}

	if(flag){
		printf("Found");
	}else{
		printf("Not Found");
	}
}
