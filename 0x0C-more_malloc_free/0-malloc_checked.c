#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocate memory and check for allocation success.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *all_mem = malloc(b);

	if (all_mem == NULL)
	{
		exit(98);
	}

	return (all_mem);

}
