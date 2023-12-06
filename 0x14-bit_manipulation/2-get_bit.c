#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Number to check bits in
 * @index: Index at which to check the bit
 *
 * Return: Value of the bit, or -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	divisor = 1 << index;
	check = n & divisor;

	if (check == divisor)
		return (1);

	return (0);
}
