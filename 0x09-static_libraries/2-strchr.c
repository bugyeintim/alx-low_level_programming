#include "main.h"

/**
 * _strchr - the name of the function
 * @s: the first parameter
 * @c: the second parameter
 *
 * Return: a pointer for c or NULL
 */

char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
