#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: pointer to the beginning to the linked list
 * @str: the string value of the new node.
 *
 * Return: a pointer to the added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;
	
	new = malloc(sizeof(list_t));
	temp = malloc(sizeof(list_t));
	if (head == NULL)
	{
		*(head)->str = strdup(str);
		*(head)->len = _strlen(str);
		*(head)->next = NULL;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->str = strdup(str);
		new->len = _strlen(str);
		new->next = NULL;
	}
	return (new);
}
