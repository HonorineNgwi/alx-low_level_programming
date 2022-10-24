#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: data to be swaped
 * @b: data to be swaped
 * Return:0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
