/*
 * Array initialization using Initializer list{}
 */

#include<stdio.h>
void main(){
	int iarr[]={10,20,30,40,50};
	int x=10;
	char ch ='A';

	printf("%p\n",&x);
	printf("%p\n",&ch);
	
	printf("%p\n",iarr);
	printf("%p\n",&iarr);
	
	printf("%d\n",iarr);  
	printf("%d\n",&iarr); 
}
