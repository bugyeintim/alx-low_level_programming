#include "main.h"
/**
 * swap_int - swaps value of integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}

