#include<stdio.h>

void main(){
	int x=10;
	char ch1='A';
	char ch2=97;
	char ch3=128;  // its not error -128, -127 ...,0,1,....,127 | 128 = -128 | 129 = -127 and so on 

	printf("%d\n",x);   // 10
	printf("%c\n",ch1); // A
	printf("%c\n",ch2); // a
	printf("%c\n",ch3); // non printable charecter
	printf("%d\n",ch3); // -128  

}

/*
 * if we try to accsess the out of range value then it goes in a loop from -128 
 */
