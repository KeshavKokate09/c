/*
 * paythagoras triplets
 */

#include<stdio.h>
void main(){
	int x,y,z,a,b,c;
	
	scanf("%d,%d,%d",&x,&y,&z);
	if(x>y && x>z){
		c=x;
		b=y;
		a=z;
	}else if(y>x && y>z){
		c=y;
		b=x;
		a=z;
	}else {
		c=z;
		b=y;
		a=x;
	}

	if(c*c == a*a + b*b){
		printf("%d and %d, %d are a paythagorus triplet",c,a,b);

	}
	
}
