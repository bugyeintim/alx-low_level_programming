#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to modify
 * @index: Index at which to clear the bit
 *
 * Return: 1 if success, -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8 - 1)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
