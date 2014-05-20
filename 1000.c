/*
 * =================================================================
 *
 *	Filename: 1000.c
 *
 *	Problem Title: A + B Problem
 *
 *	Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
 *
 *	Problem Description
 *	Calculate A + B.
 *
 *	Input
 *	Each line will contain two integers A and B. Process to end of file.
 *
 *	Output
 *	For each case, output A + B in one line.
 *
 *	Sample Input
 *	1 1
 *
 *	Sample Output
 *	2
 *
 *		Created: 2014/5/20 13:26
 *		Compiler: GCC
 *
 *		Author: BreadPrince zy_940430@sina.com
 *
 * ==================================================================
 */

#include<stdio.h>
int main()
{
	int A,B;
	while (scanf("%d%d", &A,&B) != EOF){
		printf("%d\n", A + B);
	}
	return 0;
}