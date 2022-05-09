#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: returns NULL if either nmemb or size is 0 or when malloc
 * fails. Else returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (p);
	}
	if (malloc((nmemb * size)) == NULL)
	{
		return (p);
	}
	return (malloc(nmemb * size));
}
