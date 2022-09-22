/*
 * print niven numbers upto the range
 */

#include<stdio.h>
void main(){
	int s=0,e=0;
	printf("Enter the start and end \n");
	scanf("%d",&s);
	scanf("%d",&e);

	for(int i=s; i<=e; i++){
		int sum=0;
		int n = s;
		while(n>0){
			sum=sum+n%10;
			n=n/10;
		}

		if(s%sum==0){
			printf("%d ",s);
		}
		s++;
	}
}
