#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: the node head of the linked list.
 *
 * Return: returns nothing.
 */
void free_listint(listint_t *head)
{
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
