#include<stdio.h>

void main(){
	int isSignalGreen;
	int isPoliceAtSignal;
	printf("for yes =1 and no =0\n Enter the signal Is Red :\n");
	scanf("%d",&isSignalGreen);
	printf("Enter is police available :\n");
	scanf("%d",&isPoliceAtSignal);
	if(isSignalGreen || isPoliceAtSignal){
		printf("cross the signal\n");
	}else{
		printf("wait until green\n");
	}
}
