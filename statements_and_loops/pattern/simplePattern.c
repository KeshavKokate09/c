/*
 * get the value from user starting time and ending time of playing and print for each hour
 * what you have done lets say "Palying"
 */

#include<stdio.h>

void main(){
	int startTime;
	int endTime;

	printf("Enter the starting time :\n");
	scanf("%d",&startTime);
	
	printf("Enter the Ending time :\n");
	scanf("%d",&endTime);

	for(startTime; startTime <= endTime; startTime++){
		printf("Current Time :%d\n",startTime);
		printf("Playing\n");
	}
}
