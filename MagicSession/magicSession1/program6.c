/*WAP to swap values of two numbers using a pointer.
(Hint: Use de-referencing of pointers)
Input : x=10
y=20
Op: After swapping
x=20
y=10
Write output & draw a good diagram for the code.*/

#include<stdio.h>
void main(){
	int x=0;
	int y=0;

	printf("Enter x and y elements :\n");
	scanf("%d",&x);
	scanf("%d",&y);

	int* ptr1=&x;
	int* ptr2=&y;

	x=*ptr1+*ptr2;
	y=*ptr1-*ptr2;
	x=*ptr1-*ptr2;

	printf("x=%d\n",x);
	printf("y=%d\n",y);
}
