/*WAP print the value of the below expressions.
x =9 ;
ans = ++x + x++ + ++x
Print ans value and print x
ans1= ++x + ++x + ++x + ++x
Print ans1 value and print x
ans2 = x++ + x++ + ++x + x++ + ++x
Print ans2 value and print x
ans3 = x++ + x++ + x++ + x++
Print ans3 value and print x
Calculate with a proper diagram and write an explanation in your notebook
*/

#include<stdio.h>
void main(){
	int x, ans1,ans2,ans3,ans4;
	printf("Enter the value of X :\n");
	scanf("%d",&x);

	printf("ans = ++x + x++ + ++x\n");
	ans1=++x + x++ + ++x;
	printf("X :%d\n",x);
	printf("Ans :%d\n",ans1);
	
	printf("ans = ++x + ++x + ++x + ++x\n");
	ans2=++x + ++x + ++x + ++x;
	printf("X :%d\n",x);
	printf("Ans :%d\n",ans2);
	
	printf("ans = x++ + x++ + ++x + x++ + ++x\n");
	ans3=x++ + x++ + ++x + x++ + ++x;
	printf("X :%d\n",x);
	printf("Ans :%d\n",ans3);
	
	printf("ans = x++ + x++ + ++x + x++ + ++x\n");
	ans4=x++ + x++ + x++ + x++;
	printf("X :%d\n",x);
	printf("Ans :%d\n",ans4);
}
