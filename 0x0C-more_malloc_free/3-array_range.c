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

	if (min > max)
		return (NULL);
	num_of_element = max - min + 1;
	p = malloc(sizeof(int) * (num_of_element));
	if (p == NULL)
	{
		return (NULL);
	}
	array_element = min;
	for (i = 0; i < num_of_element; i++)
	{
		p[i] = array_element;
		array_element++;
	}
	return (p);
}
