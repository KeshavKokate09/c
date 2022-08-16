# include<stdio.h>

void main(){
	int x=1;
	int y=5;
	int ans;

	ans= --x || --x;    
	printf("%d\n",ans);  //1
	printf("%d\n",x);    //-1
	printf("%d\n",y);    //5
	
	ans= ++x && --y;
	printf("%d\n",ans);   //0
	printf("%d\n",x);     //0
	printf("%d\n",y);     //5
}
