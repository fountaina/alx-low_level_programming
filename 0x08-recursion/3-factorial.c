#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *@n: the number to return the factorial of
 *
 * Return: returns the factorial result but -1 if n < 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
