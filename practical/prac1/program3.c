/*
 * WAP to print the divisors , count and addition of divisors
 */

#include<stdio.h>
void main(){
	int input=0, sum=0, count=0;
	printf("Enter the number ;\n");
	scanf("%d",&input);

	for(int i=1; i<=input; i++){
		if(input%i==0){
			printf("%d ",i);
			sum=sum+i;
			count++;
		}
	}
		printf("\ncount of divixors :%d\n",count);
		printf("addition of divixors :%d\n",sum);
}
