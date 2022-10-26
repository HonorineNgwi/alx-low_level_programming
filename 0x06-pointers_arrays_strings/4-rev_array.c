#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a:integer
 * @n:number of elements of the array
 * Return:0
 */

void reverse_array(int *a, int n)
{
	int left, right,  tmp;

	left = 0;
	right = n - 1;

	while (left < right)
	{
		tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
}
