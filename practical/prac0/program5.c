/*
 * get the value from0 to 5 andprint its spelling
 */

#include<stdio.h>
void main(){
	int num;
	printf("Enterthe number btween 0-5:\n");
	scanf("%d",&num);

	switch(num){
		case 0 : 
			printf("Zero\n");
			break;
		case 1 : 
			printf("one\n");
			break;
		case 2 : 
			printf("Two\n");
			break;
		case 3 : 
			printf("Three\n");
			break;
		case 4 : 
			printf("Four\n");
			break;
		case 5 : 
			printf("Five\n");
			break;
		default : 
			printf("value ids greater than 5 or less than 0\n");
	}
}
