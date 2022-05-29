#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list memory
 * @head: the head node of the linked list
 *
 * Return: returns nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
