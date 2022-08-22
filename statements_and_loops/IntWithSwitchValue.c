#include<stdio.h>

void main(){
	int x;
	printf("test 1");
	scanf("%d",&x);
	int y;
	printf("test 2");
	scanf("%d",&y);

	switch(x){
		case 67:
			printf("inside 54");
			break;
		default :
			printf("wrong\n");
			printf("%d\n",x);
			printf("%d\n",y);
	}
}
