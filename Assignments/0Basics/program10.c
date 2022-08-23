/*Write a program to check if a character is a vowel or
consonant. Take all the values from the user
Input: var= ”A”;
Output: A is a vowel.
Input: var= ”D”;
Output: D is a consonant.
*/
#include<stdio.h>
void main(){
	char input;
	printf("Enter the char Input \n");
	scanf("%c",&input);

	if(input=='A' || input=='a' || input=='E' || input=='e' ||input=='i' || input=='I' || input=='O' || input=='o' || input=='U' || input=='u'){
		printf("%c is a vovle",input);
	}else if (input>='A' && input<='z'){
		printf("%c is a consonant",input);
	}else{
		printf("%c is not an alphabet",input);
	}
}
