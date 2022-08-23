/*Write a program to print the value and size of the below variables.Take all
the values from the user
num=10
chr = ‘S’
rs = 55.20
crMoney = 542154313480.544543
*/

#include<stdio.h>
void main(){
	int num;
	char chr;
	float rs;
	double crMoney;

	printf("Enter the num :\n");
	scanf("%d",&num);
	printf("Enter the Char :\n");
	scanf(" %c",&chr);
	printf("Enter the Float :\n");
	scanf("%f",&rs);
	printf("Enter the double:\n");
	scanf("%lf",&crMoney);


	printf("Number :%d (%d)\n",num,sizeof(num));
	printf("Char :%c (%d)\n",chr,sizeof(chr));
	printf("float :%f (%d)\n",rs,sizeof(rs));
	printf("Double :%lf (%d)\n",crMoney,sizeof(crMoney));

}
