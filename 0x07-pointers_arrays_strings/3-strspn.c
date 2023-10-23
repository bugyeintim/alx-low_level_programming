#include "main.h"

/**
 * _strspn - the function gets the length of a prefix
 * @s: the first parameter
 * @accept: the second parameter
 * Return: the number of bytes counted.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
