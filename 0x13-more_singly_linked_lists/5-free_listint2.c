#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function frees a linked list.
 * @head: the first node of the linked list.
 *
 * Return: returns nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		while (temp != NULL)
		{
			temp = temp->next;
			free(temp);
		}
		*head = NULL;
	}
}
