#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char
 * @size: size of the array
 * @c: the character type
 *
 * Return: NULL if size = 0, else pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	static char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(c) * size);
		if (arr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
