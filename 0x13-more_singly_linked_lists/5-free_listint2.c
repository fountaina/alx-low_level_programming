#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_listint2 - function frees a linked list.
 * @head: the first node of the linked list.
 *
 * Return: returns nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = *head->next;
		free(temp);
	}
	*head = NULL;
}
