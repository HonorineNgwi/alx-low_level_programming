#include "main.h"

/**
 * print_most_numbers - prints the numbes except 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	char c = '0';

		while (c <= '9')
		{
			if (c != '2' && c != '4')
			{
				_putchar(c);
			}

			c++;
		}
	_putchar('\n');
}

