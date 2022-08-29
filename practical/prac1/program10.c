/*
 * Print the fibonachi searies upto a number
 */

#include<stdio.h>
void main(){
	int pre=0, current=1;
	int num=0;
	printf("Enter the number : \n");
	scanf("%d",&num);

	while(num>current){
		if(num>pre){
			printf("%d ",pre);
		}
		pre=pre+current;
		current=pre-current;
	}
}
