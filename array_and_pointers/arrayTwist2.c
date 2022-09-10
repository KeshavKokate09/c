/*
 * in array the identifier of array(char carr[]) is representing to an address of an 0th element
 * and address of an array ie.(&carr) gives an address of an first element but representing to an whole array
 */
//Accsessing array elements
#include<stdio.h>
void main(){
	char carr[5];
	printf("Enter the number of array elements :\n");
	carr[0]='A';
	carr[1]='B';
	carr[2]='C';
	carr[3]='D';
	carr[4]='E';
	
	printf("Array elements :\n");
	
	printf("%c\n",carr[0]);
	printf("%c\n",carr[1]);
	printf("%c\n",carr[2]);
	printf("%c\n",carr[3]);
	printf("%c\n",carr[4]);


}
