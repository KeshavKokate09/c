/*
 * Addition of two pointers is not possible, the reson behind it is the 
 * every process gets some space on ram and the addition of two address is
 * allways outside of an current process space
 * lets say process gets an memory from 0x100 to 0x200, 
 * then the addition of two address is outside of the given space
 * i.e, 100+101=201 so its an segmentation fault due to this gives an error
 *
 * error: invalid operands to binary + (have 'int *' and 'int *')
  	printf("%p", ptr1+ptr2);
  */

#include<stdio.h>
void main(){
	int x=10;
	int y =20;

	int* ptr1=&x;
	int* ptr2=&y;

	printf("%p", ptr1+ptr2);

}
