#include <stdio.h>
/**
 * main - this prints letters in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (char = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
