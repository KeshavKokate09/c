/*
 * Find the given angles are the angles of trangle or not
 */

#include<stdio.h>
void main(){
	int a=0,b=0,c=0;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a+b+c == 180){
		printf("(%d,%d,%d)The given angles are the angles of trangle",a,b,c);
	}else{
		printf("Angles are not the angles of trangle (%d,%d,%d)",a,b,c);
	}
}
