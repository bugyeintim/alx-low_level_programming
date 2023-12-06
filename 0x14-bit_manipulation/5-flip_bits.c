#include "main.h"

/**
 * flip_bits - Counts the number of bits to change
 * to get from one number to another.
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	unsigned int countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}
