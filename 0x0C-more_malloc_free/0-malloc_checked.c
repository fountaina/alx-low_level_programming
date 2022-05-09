#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: allocates b as the amount of memory
 *
 * Return: returns pointer to memory on success or 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(b));
	if (p == NULL)
	{
		_putchar('9');
		_putchar('8');
	}
	return (p);
}
