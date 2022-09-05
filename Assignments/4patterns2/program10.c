/*
D4 C3 B2 A1
A1 B2 C3 D4
D4 C3 B2 A1
A1 B2 C3 D4
*/

#include<stdio.h>
void main(){
	for(int r=1; r<=4; r++){
		for(int c=4, ch=68,n=1,ch1=65; c>=1; c--,ch--,n++,ch1++){
			if(r%2!=0){
				printf("%c%d ",ch,c);
			}else{
				printf("%c%d ",ch1,n);
			}
		}
		printf("\n");
	}
}
