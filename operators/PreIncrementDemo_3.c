int printf(char* ape, ...);

void main(){
	int x= 30;
	int ans;

	ans= ++x + ++x + ++x;
	printf("%d\n",x);
	printf("%d\n",ans);
}
