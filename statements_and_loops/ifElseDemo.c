#include<stdio.h>

void main(){
	int isLightAvailable;
	printf("Enter availability of light\n (yes =1, No =0)\n");
	scanf("%d",&isLightAvailable);

	if(isLightAvailable){
		printf("Lecture Is there");
	}else{
		printf("No lecture today");
	} 
}
