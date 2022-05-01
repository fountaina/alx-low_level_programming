#include "main.h"

/**
 * test_sqrt - tests to see if n has a square root or not
 * @root: the int that is tested
 * @n: the number to find the square root of
 * Return: returns square root if it has a natural sqare root else 0
 */
int test_sqrt(int n, int root)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (root == n || n < 0)
	{
		return (-1);
	}
	else if (root * root == n)
	{
		return (root);
	}
	return (test_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - prints the result of test_sqrt
 * @n: the number to print sqaure root of
 *
 * Return: returns the result of test_sqrt
 */
int _sqrt_recursion(int n)
{
	int result;

	result = test_sqrt(n, 1);
	return (result);
}
