#include "main.h"

/**
 * _strncpy - copies a string
 * @dest:destination string
 * @src:source string
 * @n:number of bytes
 * Return:0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for ( ; i < n && src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}
