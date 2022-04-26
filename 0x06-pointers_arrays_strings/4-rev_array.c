#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements of the array
 *
 * Return: the reversed array
 */
void reverse_array(int *a, int n)
{
	int new_array[98];
	int i;
	int b;
	int c;

	i = 0;
	c = n - 1;
	while (c >= 0)
	{
		new_array[i] = a[c];
		c--;
		i++;
	}

	b = 0;
	while (b < n)
	{
		a[b] = new_array[b];
		b++;
	}
}
