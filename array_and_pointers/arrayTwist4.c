/*
 * Array assignment 
 * In array array name returns the address of an first element
 */

#include<stdio.h>
void main(){
	int arr1[3]={10,20,30};
	int arr2[3];

	arr2=arr1;

	/*
	 * In array its not possible to assign becuase array name 
	 * returns an address 
	 * so assignment of one address to another address is not possible
	 * 1000 = 2000
	 * it allways need an box to store an any value x=|_|
	 */
}
