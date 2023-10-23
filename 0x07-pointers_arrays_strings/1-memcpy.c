#include "main.h"

/**
 * _memcpy - function name
 * @dest: first parameter
 * @src: the second parameter
 * @n: the third parameter
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (0);
}
