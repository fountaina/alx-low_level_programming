#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elments of a listint_t
 * @h: the pointer to the linked list
 *
 * Return: the number of elements in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
