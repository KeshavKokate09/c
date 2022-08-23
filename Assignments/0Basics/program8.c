/*Write a program, take a character and print whether it is in
UPPERCASE or lowercase. Take all the values from the user
Input: var = A
Output: You entered the UPPERCASE character.
*/
#include<stdio.h>
void main(){
	char input;
	printf("Enter a Char Input :\n");
	scanf("%c",&input);

	if(input>='A' && input<='Z'){
		printf("You enter a UPPERCASE char : %c\n",input);
	}else if(input>='a' && input<='z'){
		printf("You enter a LOWERCASE char : %c\n",input);
	}else{
		printf("You enter a Specail char : %c\n",input);
	}
}
