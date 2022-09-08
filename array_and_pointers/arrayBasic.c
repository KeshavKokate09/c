/*
 * Why we need an array, there is an misconcepption that array reduces the space
 * but its not true this is just an reducing number of declarations to only one 
 * declaration, declaring same type of variable using diffrent identifiers
 * its usefull when its limited or minimal but if its not mnimal then declaring
 * an array is good choice, and the values of an array is diffrentiate by the
 * index and in array it starts from 0
 */

#include<stdio.h>
void main(){
	float fPackage1;
	float fPackage2;
	float fPackage3;
	float fPackage4;
	float fPackage5;

	printf("Enter the package of friends 1 to 5:\n");
	scanf("%f",&fPackage1);
	scanf("%f",&fPackage2);
	scanf("%f",&fPackage3);
	scanf("%f",&fPackage4);
	scanf("%f",&fPackage5);

	printf("Total of package : %f",fPackage1+fPackage2+fPackage3+fPackage4+fPackage5);
}
