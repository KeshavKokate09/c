/*
 * operations on pointer
 * 1. addition of two pointer is not possible
 * 2. addition of one pointer and one integer can be possible only(flaot and double are aslonot possible
 * 3. substraction of two pointers is possible
 * 4. uniary operators can worked on ponters like ptr++ and ++ptr
 * 5. the datatype of pointer is allways same as the datatype of an address
 */
 
#include<stdio.h>
void main(){
	int x=10;
	int y=20;

	int* ptr1=&x;
	int* ptr2=&y;

	printf("%d\n",ptr1-ptr2);
	printf("%d\n",ptr2-ptr1);

}
