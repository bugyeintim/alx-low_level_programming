#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: input string
 *
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add a new node at the beginning of a list_t list.
 * @head: pointer to a pointer to the head of the list
 * @str: value to insert into the new node
 *
 * Return: address of the new node; NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	if (add->str == NULL)
	{
		free(add);
		return (NULL);
	}

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
