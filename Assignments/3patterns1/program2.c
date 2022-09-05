/*
1 2 3
a b c
1 2 3
a b c
*/

#include<stdio.h>
void main(){
	for(int r=1; r<=4; r++){
		for(int c=1,ch=97; c<=3; c++,ch++){

			if(r%2!=0){
				printf("%d ",c);
			}else{
				printf("%c ",ch);
			}
		}
		printf("\n");
	}
}
