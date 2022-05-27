#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: the array to iterate
 * @size: size of the array
 * @cmp: pointer to the fucntion that check if array element is int
 *
 * Return: index of element to first pass cmp, returns -1 if
 * there is no match, returns -1 if size <= o.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
