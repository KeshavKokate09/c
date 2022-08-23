/*WAP to take numerical input from the user and find whether the number is
divisible by 5 and 11. Take all the values from the user
Input: 55
Output: 55 is divisible by 5 & 11
Input: 15
Output: 15 is not divisible by 5 & 11
*/
#include<stdio.h>
void main(){
	int input;
	printf("Enter the input :\n");
	scanf("%d",&input);

	if(input%5==0 && input%11==0){
		printf("%d is divisible by %d and %d",input,5,11);
	}else{
		printf("%d is Not divisible by %d and %d",input,5,11);	
	}
}
