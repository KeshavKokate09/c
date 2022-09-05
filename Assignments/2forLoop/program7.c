//WAP to calculate the LCM of given two numbers.

#include<stdio.h>
void main(){
	int n1=0,n2=0;
	printf("Enter a N1 :\n");
	scanf("%d",&n1);
	printf("Enter a N2 :\n");
	scanf("%d",&n2);

	int lcm=1;

	/* WIP
	 *
	 */
	for(int i =1; i<=n1+n2; i++){
		if(n1%i == 0 && n2 % i == 0){
			lcm = lcm * i;
			n2=n2/i;
			n1=n1/i;
			i=1;
		}else if(n1 % i == 0 && n1 >= i && n2 %i !=0){
			lcm = lcm * i;
			n2=n2/i;
			n1=n1/i;
			i=1;
		}else if(n2 % i == 0 && n2>=i && n1%i!=0){
			lcm = lcm*i;
			n2=n2/i;
			n1=n1/i;
			i=1;
		}
	printf("LCM of (%d,%d) is = %d\n",n1,n2,lcm);

	}

	printf("LCM of (%d,%d) is = %d",n1,n2,lcm);
}
