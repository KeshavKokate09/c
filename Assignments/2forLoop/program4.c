//WAP to Find the sum of numbers that are divisible by 5 in the given range

#include<stdio.h>
void main(){
	int start=0,end=0,sum=0;
	printf("enter starting range : \n");
	scanf("%d",&start);
	printf("enter starting range : \n");
	scanf("%d",&end);

	for(;start<=end;start++){
		if(start % 5 == 0){
			sum = sum + start;
		}
	}
	printf("Total sum of numbers divisible by 5 is %d",sum);
}
