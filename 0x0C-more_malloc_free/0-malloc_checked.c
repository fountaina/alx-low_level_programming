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
	char *p;
	int i = 0;

	p = malloc(b);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; p[i] != '\0'; i++)
		p[i] = 0;
	return (p);
}
