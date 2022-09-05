//WAP to print all even numbers in reverse order and odd numbers in the standard
//way. Both separately. Within a range.

#include<stdio.h>
void main(){
	int start=0,end=0;
	printf("Enter the starting range : \n");
	scanf("%d",&start);
	printf("Enter the ending range : \n");
	scanf("%d",&end);

 	for(int i=start;i<=end;i++){
                if(i%2==1){
                        printf("%d ",i);
                }
        }
        printf("\n");

        for(int i =end;i>=start;i--){
                if(i%2==0){
                        printf("%d ",i);
                }
        }
}
