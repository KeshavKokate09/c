/*
WAP to find the given element from the array
Take array size and array elements from the user
IP : enter array : 10 12 13 15 16 14
Ip : enter element : 15
Op: 1 5 is present
*/

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

	printf("Enter the search element :\n");
	int sElement=0;
	scanf("%d",&sElement);

	int flag=0;
	for(int i=0; i<size; i++){
		if(arr[i] == sElement){
			flag=1;
			break;
		}
	}

	if(flag){
		printf("%d is present\n",sElement);	
	}else{
		printf("%d is Not present\n",sElement);	
	}



}
