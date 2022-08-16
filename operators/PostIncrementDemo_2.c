
int printf(char* apt, ...);

void main(){
	int x=70;
	printf("%d\n",x);   // 70
	printf("%d\n",++x);   // 71
	printf("%d\n",x++);   // 71
	/*++x;                // return temperory variable and increment x
	printf("%d\n",x);   // 71
	printf("%d\n",x++);  // 71
*/}


/*
 * int post(){
 *   int temp;
 *   temp=x;
 *   x=x+1;
 *   return temp;
 * }
 */
