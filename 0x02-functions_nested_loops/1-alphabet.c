#include "main.h"
/**
 * main - prints out lowercase alphabets
 *
 * Return: 0
 */
void main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
