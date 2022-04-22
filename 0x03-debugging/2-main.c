#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 3 integers
 * Returns: 0
 */

int main()
{
	int a, b, c;
	int largest;

	a = 1;
	b = 98;
	c = 98;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
