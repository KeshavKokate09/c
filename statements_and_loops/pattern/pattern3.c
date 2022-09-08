/*
 * - - - - A
 * - - - A B
 * - - A B C
 * - A B C D
 * A B C D E
 */

#include<stdio.h>
void main(){
	int row;
	printf("Enter a number of rows :\n");
	scanf("%d",&row);
	for(int ritr=1; ritr<=row; ritr++){
		char ch = 'A';
		for(int citr=row; citr>=1; citr--){
			if(citr>ritr){
				printf("  ");
			}else{
				printf("%c ",ch);
				ch++;
			}
		}
		printf("\n");
	}

	printf("               Dry Run           \n");
	printf("ritr  ritr<=row  ch  citr  citr>=1  if(citr>ritr)  else()  print()   ch++   citr--  ritr++  \n");
        printf("-----------------------------------------\n");
 	for(int ritr=1; ritr<=row; ritr++){
                char ch = 'A';
                for(int citr=row; citr>=1; citr--){
                        if(citr>ritr){
                                printf("%d  %d<=%d  %c  %d  %d>=1  if(%d>%d)       -   %c  %d \n",ritr,ritr,row,ch,citr,citr,citr,ritr,ch,citr);
                        }else{
                                printf("%d  %d<=%d  %c  %d  %d>=1  if(%d>%d)       -   %c  %d \n",ritr,ritr,row,ch,citr,citr,citr,ritr,ch,citr);
                                ch++;
                        }
                }
                printf("\n");
        }
	
	printf("-----------------Using Three for loops--------- \n");
	for(int ritr=1; ritr<=row; ritr++){
		char ch = 'A';
		for(int spitr=row-1; spitr>=ritr; spitr--){
			printf("  ");
		}
		for(int citr=1; citr<=ritr; citr++){
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
