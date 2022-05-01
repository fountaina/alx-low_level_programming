#include "main.h"
/**
 * test_number - tests if a number is prime or not
 * @n: the number to test
 * @a: odd number to test it
 *
 * Return: returns 1 if n is prime and 0 otherwise
 */
int test_number(int n, int a)
{
	if (n == 1 || n < 0)
	{
		return (0);
	}
	if (a == n)
	{
		return (1);
	}
	else if ((n % a) == 0)
	{
		return (0);
	}
	return (test_number(n, a + 1));
}
/**
 * is_prime_number - tells if an int is a prime number or not
 * @n: the int to test
 *
 * Return: returns 1 if the int is prime 0 otherwse
 */
int is_prime_number(int n)
{
	return (test_number(n, 2));
}
