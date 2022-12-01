#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: the index, starting from 0
 * @n: the number with the bit to check
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	for (
