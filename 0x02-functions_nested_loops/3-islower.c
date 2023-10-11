#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: is the character to be checked
 *
 * Return: 1 if char is uppercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
