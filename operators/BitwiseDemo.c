#include <stdio.h>

void main(){
	int x=5;
	int y=4;
	int ans;

	ans=x & y;
	printf("%d\n",ans); //4

	/*
	 * 4 = 0 1 0 0
	 * 5 = 0 1 0 1 &
	 * -----------
	 * 4 = 0 1 0 0
	 */
	
	ans=x | y;
	printf("%d\n",ans); // 5
	
	/*
	 * 4 = 0 1 0 0
	 * 5 = 0 1 0 1 |
	 * -----------
	 * 5 = 0 1 0 1
	 */

	ans=x ^ y;
	printf("%d\n",ans);  //1
	
	/*
	 * 4 = 0 1 0 0
	 * 5 = 0 1 0 1 ^
	 * -----------
	 * 1 = 0 0 0 1
	 */
}
/*
 * bitwise operator works on bit by bit so the process is
 * 1. first convert decimal value into binary
 * 2. then perform the bit operation
 * 3. then finaly again convert binary into decialValue
 */

