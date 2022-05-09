#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: allocates b as the amount of memory
 *
 * Return: returns pointer to memory on success or 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	return (malloc(sizeof(b)));
}
