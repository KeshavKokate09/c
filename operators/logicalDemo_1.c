# include<stdio.h>

void main(){
	int x=6;
	int y=5;
	int ans;

	ans=++x || ++y;   //if the first expression is true then it dont check the next expression because at any case the final output is true
	printf("%d\n",ans);
	printf("%d\n",x);
	printf("%d\n",y);

	ans= x++ && ++y;  //if first expression is false then it dosent check next expression beacuse at any case it the final output is false
	printf("%d\n",ans);
	printf("%d\n",x);
	printf("%d\n",y);

}
