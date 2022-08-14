int printf(char* str, ...);

void main(){
	int x=50;
	int ans;
	int ans1;
	printf("%d\n",x);  //50
	ans=x++;           //ans =50, x=51;
	printf("%d\n",x);  // x=51;
	printf("%d\n",ans);// ans =50
	ans1= x++ + x++;   // ans1=51+52=103, x=53
	printf("%d\n",x);
	printf("%d\n",ans1);
}
