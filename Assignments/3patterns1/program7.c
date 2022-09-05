/*
1   2  9    4
25  6  49   8
81  10 121 12
169 14 225 16
*/

#include<stdio.h>
void main(){
	int x=1;
	for(int r=1; r<=4; r++){
		for(int c=1; c<=4; c++){
			if(c%2!=0){
				printf("%d ",x*x);
			}else{
				printf("%d ",x);
			}
			x++;
		}
		printf("\n");
	}
}
