/*Write output & draw a good diagram for the code.
int arr1 [ ]={1 0,20,30,40,50};
int arr1 [ ]={70,70,80,90,1 00};
Int *ptr1 =Null;
Int *ptr2=Null;
ptr1 =ptr1 +3;
ptr2=ptr2+2;
*ptr2=35;
for (int i=0;i<5; i++){
printf(“%d ”,arr1 [i]);
}fo
r (int i=0;i<5; i++){
printf(“%d ”,arr2[i]);
}*/

#include<stdio.h>
void main(){
	int arr1[]={10,20,30,40,50};
	int arr2[]={70,70,80,90,100};
	int *ptr1 =NULL;
	int *ptr2=NULL;
	ptr1 =ptr1+3;
	ptr2=ptr2+2;
	*ptr2=35; //segemntation Fault
	for (int i=0;i<5; i++){
		printf("%d ",arr1 [i]);
	}
	for(int i=0;i<5; i++){
		printf("%d ",arr2[i]);
	}
}
