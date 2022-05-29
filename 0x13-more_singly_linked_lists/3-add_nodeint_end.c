#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: the beginning of the linked list
 * @n: the int to add
 *
 * Return: returns a pointer to the added node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t));
	last_node = malloc(sizeof(listint_t));
	new_node->n = n;
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
