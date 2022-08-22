#include<stdio.h>
void main(){
	int tickitNo;
	char seatingRow;
	float tickitPrice;

	printf("Enter the Tickit no : \n");
	scanf("%d",&tickitNo);
	printf("Enter the Seating row (Char) : \n");
	scanf(" %c",&seatingRow); // due to enter press by last value we get the char as \n value so to remove that  \n we need to add one space before %c or make first priority to char value
	printf("Enter the Tickit Price : \n");
	scanf("%f",&tickitPrice);

	printf("    Tickit    \nTikit No : %d \nTickit Price : %f\nSeating Row : %c\n",tickitNo,tickitPrice,seatingRow);
}
