#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: NULL failure.
 */
int **alloc_grid(int width, int height)
{
	int i, w, h;
	int **arr = (int **) malloc(width * sizeof(int *));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		arr[i] = (int *) malloc(height * sizeof(int));
		if (arr[i] == NULL)
		{
			return (NULL);
		}
	}
	for (w = 0; w < width; w++)
	{
		for (h = 0; h < height; h++)
		{
			arr[w][h] = 0;
			return (arr);
		}
	}
	return (arr);
}
