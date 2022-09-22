/*
 * WAP to print the fibonachi series upto given number.\
 */

#include<stdio.h>
void main(){
	int num=0;
	scanf("%d",&num);

	int pre=0, post=1, sum=0;
	for(int i=0; i<num; i++){
		printf("%d ",pre);
		sum=pre+post;
		pre=post;
		post=sum;
	}
}
