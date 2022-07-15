#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * add_node - adds a new node to the beggineing of a linked list
 * @head: pointer to the beginning of a linked list
 * @str: string value of the new node.
 *
 * Return: a list_t struct.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
