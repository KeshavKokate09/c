/*
D4 C3 B2 A1
D4 C3 B2 A1
D4 C3 B2 A1
D4 C3 B2 A1
*/

#include<stdio.h>
void main(){
	for(int r=1; r<=4; r++){
		for(int c=4, ch=68; c>=1; c--,ch--){
			printf("%c%d ",ch,c);
		}
		printf("\n");
	}
}
