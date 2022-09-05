/*
 
Program 9: WAP to print the count of divisors of the entered num.
Ip: 16
Op: Divisors of 16 are
1
2
4
8
*/

#include<stdio.h>
void main(){
	int input=0,count=0;
	printf("Enter the number :\n");
	scanf("%d",&input);

	for(int i=1; i<=input; i++){
		if(input%i==0){
			printf("%d ",i);
			count++;
		}
	}
		printf("\n%d = total count",count);
}
