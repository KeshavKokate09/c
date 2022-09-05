/*
 * find min number between three
 */

#include<stdio.h>
void main(){
	int first, second, third;

	printf("Enter The First num :\n");
	scanf("%d",&first);
	printf("Enter The second num:\n");
	scanf("%d",&second);
	printf("Enter The Third num :\n");
	scanf("%d",&third);

	if(first<=second && first<=third){
		printf("%d is min",first);
	}else if(second<=first && second <=third){
		printf("%d is min",second);		
	}else if(third<=first && third<=second){
		printf("%d is min",third);
	}else {
		printf("All are same");
	}
}
