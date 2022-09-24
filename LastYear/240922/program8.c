/*
 * WAP to print the sum of digits
 */

#include<stdio.h>
void main(){
	int s=0,e=0;
	printf("Enter the start num :\n");
	scanf("%d",&s);
	printf("Enter the end num :\n");
	scanf("%d",&e);
	
	for(int i=s; i<=e; i++){
		int rev=0;
		int num=s;
		while(num>1){
			int digit =num%10;
			rev=rev+digit;
			rev=rev*10;
			num/=10;
		}

		if(rev/10 == s){
			printf("%d ",s);
		}
		s++;
	}
}
