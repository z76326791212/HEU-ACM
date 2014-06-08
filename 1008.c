/* 
 * ============================================================================
 * 
 *  Filename: 1008.c
 * 
 *  Problem Title: Elevator 
 * 
 *  Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
 * 
 *  Problem Description
 *  The highest building in our city has only one elevator. A request list is made up with N positive numbers. The numbers denote at which floors the elevator will stop, in specified order. It costs 6 seconds to move the elevator up one floor, and 4 seconds to move down one floor. The elevator will stay for 5 seconds at each stop.
 *  For a given request list, you are to compute the total time spent to fulfill the requests on the list. The elevator is on the 0th floor at the beginning and does not have to return to the ground floor when the requests are fulfilled.
 * 
 *  Input
 *  There are multiple test cases. Each case contains a positive integer N, followed by N positive numbers. All the numbers in the input are less than 100. A test case with N = 0 denotes the end of input. This test case is not to be processed.
 * 
 *  Output
 *  Print the total time on a single line for each test case.
 * 
 *  Sample Input
 *  1 2
 *  3 2 3 1
 *  0
 * 
 *  Sample Output
 *  17
 *  41
 * 
 *      Created: 2014/6/8 0:53
 *      Compiler: GCC
 *
 *      Author: BreadPrince zy_940430@sina.com
 * 
 * ============================================================================
 */

#include <stdio.h>
int main() {
	int n, t, m, tmp;
	while (scanf("%d", &n) != EOF) {
		if (n == 0) break;
		t = 0;
		tmp = 0;
		t += 5 * n;
		while (n>0) {
			scanf("%d", &m);
			if (m>tmp){
				t += (m - tmp) * 6;
			}
			else {
				t += (tmp - m) * 4;
			}
			tmp = m;
			n--;
		}
		printf("%d\n", t);
	}
	return 0;
}