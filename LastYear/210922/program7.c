/*
 * print the harshed numbers from the given series
 */

#include<stdio.h>
void main(){
	int start=0, end=0;
	printf("Enter the starting number :\n");
	scanf("%d",&start);
	printf("Enter the Ending number :\n");
	scanf("%d",&end);

	for(int i=start;i<=end;i++){
		int x=start;
		int sum=0;
		while(x>0){
			sum=sum+(x%10);
			x=x/10;
		}

		if(start%sum==0){
			printf("%d ",start);
		}
		start++;
	}
}
