//WAP to calculate the LCM of given two numbers.

#include<stdio.h>
void main(){
	int n1=0,n2=0;
	printf("Enter a N1 :\n");
	scanf("%d",&n1);
	printf("Enter a N2 :\n");
	scanf("%d",&n2);

	int lcm=1;
	for(int i=2; i<=n1*n2; i++){
		if(i%n1 == 0 && i%n2 == 0){
			printf("LCM of (%d,%d) is = %d\n",n1,n2,i);
			break;
		}

	}
}
