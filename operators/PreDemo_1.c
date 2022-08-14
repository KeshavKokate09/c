int printf(char* apt, ...);

void main(){
	int x=5;
	printf("%d\n",x);    //5
	++x;               //x=x+1;
	printf("%d\n",x);    //6
	printf("%d\n",++x);  //7
}

/* int pre(x){
 *   x=x+1;
 *   return x;
 *   }
 */
