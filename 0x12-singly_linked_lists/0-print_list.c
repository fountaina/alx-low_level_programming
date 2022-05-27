#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints the number of elements in a list and their values
 * @h: the first element of the linked list
 *
 * Return: returns the number of elements in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", (h->len), (h->str));
		}
		h = h->next;
		n++;
	}
	return (n);
}
