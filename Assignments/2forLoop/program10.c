/*WAP to print the numbers in a given range and their multiplicative inverse.
Suppose x is a number then its multiplicative inverse or reciprocal is 1/x.
The expected output for range 1 - 5
1 = 1
2 = 1/2 i.e 0.5
3 = 1/3 i.e 0.33
4 = 0.25
5 = 0.20
*/

#include<stdio.h>
void main(){
	float start=0.0, end=0.0;
	printf("Enter the starting range : \n");
	scanf("%f",&start);
	printf("Enter the ending range : \n");
	scanf("%f",&end);

	for(;start<=end;start++){
		printf("%f = %f\n",start,1/start);
	}
}

/*
 * Input must be in floating point
 * 1.0 to 5.0 
 */
