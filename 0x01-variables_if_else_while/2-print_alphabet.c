#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 * Description: print the letters of the alphabet in lower case
 * Return: 0
 *
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	{
		putchar('\n');
	}
	return (0);
}
