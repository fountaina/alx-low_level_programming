#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - calculates the number of elements in a doubly linked list
 * @h: the head node
 *
 * Return: the number of elments in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}
