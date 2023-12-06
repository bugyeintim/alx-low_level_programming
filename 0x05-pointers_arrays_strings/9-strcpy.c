#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest
 * @dest: Pointer to the destination
 * where the string is to be copied
 * @src: Pointer to the source string to be copied
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}

	for (; x < l; x++)
	{
		dest[x] = src[x];
	}

	dest[l] = '\0';

	return (dest);
}
