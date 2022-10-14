#include <stdio.h>
#include <time.h>

/**
 * main - main entry
 * Description: print all alphabets in lowercase, don't print q and e
 * Return:0
 *
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
