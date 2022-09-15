/*
 * we have to declare painter as we store the address of datatype, it might be dangerous in feture use
 */

#include<stdio.h>
void main(){
	int x=10;

	int* ptr1=&x;
	int* ptr2=x;

	printf("%p\n",ptr1);
	printf("%p\n",ptr2); // if we try to et the address it gets an segmentation fault due to the address of 10 is outside of an the current running process

}
