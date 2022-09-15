/*
 * It is also an datatype 
 * sizeof an pointer is allways an 8 bytes
 * wich store anyone adddres, 
 * it may be variable pointer, function pointer, null pointer or void pointer
 */

#include<stdio.h>
void main(){
	int x=10;
	char ch='A';
	float f=10.5;

	int * xptr=&x;
	char * chptr=&ch;
	float * fptr=&f;

	//printf("%d\n",xptr); it reads the 4 bytes of address
	printf("%p\n",chptr);
	printf("%p\n",fptr);
	printf("%p\n",xptr);
	
}
