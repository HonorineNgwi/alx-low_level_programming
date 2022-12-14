#include "main.h"

/**
 * _strncat - concatenates two strings
 * @n:number of bytes to be used
 * @src:source string
 * @dest:destination string
 * Return:dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	while (src[i] != 0 && i < n)
	{
		dest[len] = src[i];
		++i;
		++len;
	}
	dest[len] = '\0';
	return (dest);
}
