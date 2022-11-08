/*
 *
 *
 */
#include<stdio.h>
void main(){
	int arr1[]= {10,20,30};
	int arr2[]={40,50,60};

	int (* ptr1)[3]=&arr1;
	int (* ptr2)[3]=&arr2;

	void *aptr1[]={ptr1,ptr2}; // Generic pointer wich stores the address of all pointers

	printf("%d\n",*((int *)*aptr1+1));
	printf("%d\n",*((int *)*(aptr1+1)+1));

}
