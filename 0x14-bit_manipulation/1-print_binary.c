#include <stdio.h>

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The unsigned long integer to be printed in binary.
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;
	int i;

	for (i = size - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if (n & mask)
			printf("1");
		else
			printf("0");
	}

	printf("\n");
}
