/*
 * get an array and print if it is divisible by 4 and 5
 */

#include<stdio.h>
void main(){
	int size=0;
	printf("Enter the size of an array :\n");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter the Array elements :\n");
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
	
	int flag=0;
	for(int i=0; i<size; i++){
		if(arr[i]%4 == 0 && arr[i]%5 == 0){
			flag=1;
			break;
		}
	}

	if(flag){
		printf("Found\n");
	}else{
		printf("Not Found\n");
	}
}
