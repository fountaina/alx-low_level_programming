#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters outside n. if n is 0 returns 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	va_start(ap, n);
	sum = 0;
	if (n == 0)
		return (sum);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);
	return (sum);

}
