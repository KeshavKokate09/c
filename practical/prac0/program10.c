/*
Write a program, take two characters if these characters are equal then print them as it is
but if they are unequal then print their difference.
Input: va1=s var2=s
Output: va1=s var2=s
Input: va1=a var2=p
Output: The difference between a and p is 15
*/

#include<stdio.h>
void main(){
	char ch1,ch2;
	printf("Enter first char :\n");
	scanf("%c",&ch1);
	printf("Enter second char :\n");
	scanf(" %c",&ch2);

	if(ch1 == ch2){
		printf("%c and %c are same\n",ch1,ch2);
	}else{
		if(ch1>=ch2){
			printf("The diffrence is %hu",ch1-ch2);

		}else{
			printf("The diffrence is %hu",ch2-ch1);
		}
	}
}
