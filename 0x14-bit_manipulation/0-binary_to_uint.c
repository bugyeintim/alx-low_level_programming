#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing a binary number.
 *
 * Return: Unsigned int with the decimal value of the binary number, or 0 if an error occurs.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (!b)
		return 0;


	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return 0;

		result <<= 1;
		if (b[i] == '1')
			result += 1;
	}

	return result;
}
