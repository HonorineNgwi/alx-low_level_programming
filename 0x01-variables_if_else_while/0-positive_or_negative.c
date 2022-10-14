#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: print if a number is positive or negative
 *
 * Return: returns 0
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*if n>=0, n<=0 */
	printf("The number is positive, negative, or zero, %d\n", n);
	return (0);
}
