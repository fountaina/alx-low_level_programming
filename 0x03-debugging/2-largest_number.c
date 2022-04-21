#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: seconde integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest_num;

	if (a > b && a > c)
	{
		largest_num = a;
	}
	else if (b > a && b > c)
	{
		largest_num = b;
	}
	else if (c > a && c > b)
	{
		largest_num = c;
	}

	return (largest_num);
}
