#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: is the integer for the paramaters of my function
 * Return: 0
 */

void print_line(int n)
{
	int ns;

	for (ns = 0; ns < n; ns++)
	{
		if (n <= 0)
		{
			_putchar ('\n');
		}
		_putchar (95);
	}
	_putchar ('\n');
}
