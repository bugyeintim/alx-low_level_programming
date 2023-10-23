#include "main.h"

/**
 * _memset - the name of the function
 * @s: the first parameter
 * @b: the second parameter
 * @n: the third parameter
 *
 * Return: the pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
