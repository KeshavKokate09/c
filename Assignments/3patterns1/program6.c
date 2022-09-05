/*
$ = $ =
$ = $ =
$ = $ =
$ = $ =
*/

#include<stdio.h>
void main(){
	for(int r=1; r<=4; r++){
		for(int c=1; c<=4; c++){
			if(c%2!=0){
				printf("$ ");
			}else{
				printf("= ");
			}
		}
		printf("\n");
	}
}
