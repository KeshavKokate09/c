/*
D C B A
e d c b
F E D C
g f e d
*/

#include<stdio.h>
void main(){
	for(int r = 1;r<=4; r++){
		int ch =67;
		ch = ch+r;
		if(r%2==0){
			ch=ch+32;
		}
		for(int c=1; c<=4; c++){
			printf("%c ",ch--);
		}
		printf("\n");
	}
}
