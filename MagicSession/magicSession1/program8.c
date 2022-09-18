/*Write output & draw a good diagram for the code.
char arr[]={‘A’,’B’,’C’,’D’,’E’}:
Char *ptr=&arr[2];
(*ptr)++;
ptr=ptr+2;
printf(“%c\n”,*ptr);
for(int i=0; i<5; i++){
printf(“%c “,arr[i]);
}*/

#include<stdio.h>
void main(){
	char arr[]={'A','B','C','D','E'};
	char *ptr=&arr[2];
	(*ptr)++;
	ptr=ptr+2;
	printf("%c\n",*ptr);
	
	for(int i=0; i<5; i++){
		printf("%c ",arr[i]);
	}

}
