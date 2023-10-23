#include "main.h"

/**
 * _strchr - the name of the function
 * @s: the first parameter
 * @c: the second parameter
 *
 * Return: a pointer for c or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
