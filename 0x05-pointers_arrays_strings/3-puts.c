#include "main.h"
/**
 * _puts - puts string followed by a new number
 * @str: first parameter
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar (str[i]);
		_putchar ('\n');
	}
}
