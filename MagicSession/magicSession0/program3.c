/*
 * WAP to print all composite numbers between given range
 * start : 1
 * end : 15
 * output : 4,6,8,9,10,12,14,15
 */

#include<stdio.h>
void main(){
	int start=0,end=0;
	printf("Enter the start :\n");
	scanf("%d",&start);
	printf("Enter the end :\n");
	scanf("%d",&end);

	for(;start<=end;start++){
		for(int i=2; i<=end/2;i++){
			if(start%i==0 && start!=i){
				printf("%d ",start);
				break;
			}
		}
	}
}
