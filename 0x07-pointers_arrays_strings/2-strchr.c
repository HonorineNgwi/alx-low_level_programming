#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s:String
 * @c: first occurence of the character
 * Return: a pointer to the first occurance of the character @c in the string
 * @s. Return NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
