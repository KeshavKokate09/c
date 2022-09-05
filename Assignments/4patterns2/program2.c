/*
3 2 1
c b a
3 2 1
c b a
*/

#include<stdio.h>
void main(){
	for(int r=1; r<=4; r++){
		for(int c=3,ch=99; c>=1; c--,ch--){

			if(r%2!=0){
				printf("%d ",c);
			}else{
				printf("%c ",ch);
			}
		}
		printf("\n");
	}
}
