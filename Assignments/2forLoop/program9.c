//WAP to calculate the square root of a number ranging from 100 to 300
#include<stdio.h>
void main(){
	int start=100,end=300;
	for(int i =10; i<=20; i++){
		if(i*i >= 100 && i*i <= 300){
			printf("%d * %d = %d\n",i,i,i*i);
		}
	}

}
