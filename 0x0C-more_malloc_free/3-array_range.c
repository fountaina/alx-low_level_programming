#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum element(first element)
 * @max: the maximum element(last element)
 *
 * Return: returns pointer of the array, NULL if min < max
 * or if malloc fails
 */
int *array_range(int min, int max)
{
	int array_element;
	int *p;
	int num_of_element;
	int i;

	num_of_element = max - min + 1;
	p = malloc(sizeof(int) * (num_of_element));
	if (p == NULL)
	{
		return (NULL);
	}
	array_element = min;
	if (min > max)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
		p[i] = array_element;
		array_element++;
	}
	return (p);
}
