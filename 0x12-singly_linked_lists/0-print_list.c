#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>



/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes.
 *         If str is NULL, print [0] (nil).
 *         You are allowed to use printf.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	printf("[");
	while (h != NULL)
	{
		if (h->str == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", h->str);
	}

	count++;

	if (h->next != NULL)
	{
		printf(", ");
	}

	h = h->next;
	}

	printf("]\n");

	return (count);
}
