/*
 * =================================================================
 *
 *	Filename: 1001.c
 *
 *	Problem Title: Sum Problem
 *
 *	Time Limit: 1000/500 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
 *
 *	Problem Description
 *	Hey, welcome to HDOJ(Hangzhou Dianzi University Online Judge).
 *	In this problem, your task is to calculate SUM(n) = 1 + 2 + 3 + ... + n.
 *
 *	Input
 *	The input will consist of a series of integers n, one integer per line.
 *
 *	Output
 *	For each case, output SUM(n) in one line, followed by a blank line. You may assume the result will be in the range of 32-bit signed integer.
 *
 *	Sample Input
 *	1 100
 *
 *	Sample Output
 *	1 5050
 *
 *		Created: 2014/5/20 13:35
 *		Compiler: GCC
 *
 *		Author: BreadPrince zy_940430@sina.com
 *
 * ==================================================================
 */

#include <stdio.h>
int main()
{
	int A;
	while (scanf("%d", &A) != EOF){
		int b=0,i;
		for (i = 1; i <= A; i++){
			b = b + i;
		}
		printf("%d\n\n", b);
	}
	return 0;
}