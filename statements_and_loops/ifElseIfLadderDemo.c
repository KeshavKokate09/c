#include<stdio.h>

void main(){
	int pocketMoney;
	printf("Enter the available Money :\n");
	scanf("%d",&pocketMoney);

	if(pocketMoney>=2500){
		printf("happipola");
	}else if(pocketMoney>=2000){
		printf("co2");
	}else if(pocketMoney>=1000){
		printf("vaishali");

	}else {
		printf("Ghari basa");
	}
}
