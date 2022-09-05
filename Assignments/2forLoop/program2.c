//WAP to print the character whose ASCII is even.

#include<stdio.h>
void main(){
	int start=0,end=0;
	printf("Enter the Starting range : \n");
	scanf("%d",&start);
	printf("Enter the ending range : \n");
	scanf("%d",&end);

	for(;start<=end && end<128;start++){
		if(start % 2 == 0){
			printf("%c = %d\n",start,start);
		}
	}
}
