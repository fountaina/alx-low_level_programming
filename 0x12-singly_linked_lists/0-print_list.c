#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - writes a string to stdout.
 * @str: the string to be writtten to stdout.
 *
 * Retrun: nothing
 */
void  _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
/**
 * print_list - prints the number of elements in a list and their values
 * @h: the first element of the linked list
 *
 * Return: returns the number of elements in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	unsigned int i;

	while (h)
	{
		if (h->str == NULL)
		{
			_puts("[0] (nil)");
			_putchar('\n');
		}
		else
		{
			_putchar('[');
			_putchar((h->len) + '0');
			_putchar(']');
			_putchar(' ');
			for (i = 0; i < (h->len); i++)
				_putchar(h->str[i]);
			_putchar('\n');
			n++;
		}
		h = h->next;
	}
	return (n);
}
