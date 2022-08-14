int printf(char* _var_, ...);

void main(){
	int x=20;
	int ans;
	int ans1;
	ans=++x;        //ans = x+1; high priority to unary operator, and less for assignment operator(==)
	printf("%d\n",x);  
	printf("%d\n",ans);
	ans1=++x + ++x;
	printf("%d\n",x);
	printf("%d\n",ans1);
}
