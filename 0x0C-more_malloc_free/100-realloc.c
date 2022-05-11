#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates blocks of memory to an array.
 * @ptr: the array to reallocate the block of memory.
 * @old_size: former size of the array.
 * @new_size: the new  block of memory.
 *
 * Return: returns NULL if realloc fails or new_size = 0
 * else, returns the reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr = ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	for (i = 0; i < new_size; i++)
		new_ptr[i] = old_ptr[i];
	return (new_ptr);
}
