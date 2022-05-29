#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: pointer to the beginning to the linked list
 * @str: the string value of the new node.
 *
 * Return: a pointer to the added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	new_node = malloc(sizeof(list_t));
	last_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
