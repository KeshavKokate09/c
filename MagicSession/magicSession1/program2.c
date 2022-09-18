/*WAP to calculate the count of even and odd elements
Take array size and array elements from the user
IP : enter array : 1 0 1 2 1 3 1 5 1 6 1 7 1 9 20 22 23
OP: even element count is
OP: odd element count is*/

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

	int oddC=0,evenC=0;
	for(int i=0; i<size; i++){
		if(arr[i] % 2 ==0){
			evenC++;
		}else{
			oddC++;
		}
	}

	printf("Even element count is %d \n",evenC);	
	printf("Odd element count is %d \n",oddC);	



}
