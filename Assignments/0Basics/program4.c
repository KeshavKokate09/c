/*
WAP to find min among 2 numbers. Take all the values from the
user
Input : 2 4
Output: 2

*/

#include<stdio.h>
void main(){
	int x,y;
	printf("Enter a First value : \n");
	scanf("%d",&x);
	printf("Enter a Second value : \n");
	scanf("%d",&y);

	if(x<y){
		printf("The min value is : %d",x);
	}else if(x>y){
		printf("The min value is : %d\n",y);
	}else{
		printf("Both are same");
	}
}
