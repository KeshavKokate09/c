//Array of pointer to an array

#include<stdio.h>
void main(){
	int arr1[]={10,20,30};	
	int arr2[]={40,50,60};

	int (* ptr[])[3]={&arr1, &arr2};

	printf("%d",*(**ptr+1));
}
