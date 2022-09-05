//WAP take two characters if these characters are equal then print the same but if they are unequal then print their difference....
#include<stdio.h>
void main(){
	char start,end;
	printf("Enter the starting range Char :\n");
	scanf("%c",&start);
	printf("Enter the ending range Char :\n");
	scanf(" %c",&end);

	if(start == end){
		printf("%c",start);
	}else{
		if(start>=end){
			printf("%d",start-end);
		}else{
			printf("%d",end - start);
		}
	}
	
}
