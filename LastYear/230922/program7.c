/*
 * WAP to print the number is perfect or not in given range
 */

#include<stdio.h>
void main(){
	int start=0,end=0;
	printf("Enter the start :\n");
	scanf("%d",&start);
	printf("Enter the end :\n");
	scanf("%d",&end);

	for(int i=start; i<=end; i++){
		int num=start;
		int sum=0;
		for(int i=1; i<=num/2; i++){
			if(num%i==0){
				sum=sum+i;
			}
		}
	
		if(num == sum){
			printf("%d ",num);
		}
		start++;
	}
}
