/*
1 2 3 4
25 36 49 64
9 10 11 12
169 196 225 256
*/

#include<stdio.h>
void main(){
	int x=1;
	for(int r=1; r<=4; r++){
		for(int c=1; c<=4; c++){
			if(r%2==0){
				printf("%d ",x*x);
			}else{
				printf("%d ",x);
			}
			x++;
		}
		printf("\n");
	}
}
