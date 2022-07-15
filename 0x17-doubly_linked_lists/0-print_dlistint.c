#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - returns the number of nodes in a doubly linked list
 * @h: the head node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num_of_node = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		num_of_node++;
		h = h->next;
	}
	printf("%d\n", h->n);
	num_of_node++;
	return (num_of_node);
}
