#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list.
 * @h: the linked list
 *
 * Return: returns an int of type size_t
 */
size_t listint_len(const listint_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
