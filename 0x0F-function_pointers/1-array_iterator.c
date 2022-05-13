#include <stddef.h>

/**
 * array_iterator - iterates over an array
 * @array: the array to iterates.
 * @size: size of the array
 * @action: the action to be carried out on each element of the array.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	
	if (array == NULL || action == NULL)
		return;
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
	{
		return;
	}
}
