#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @seperator: what to print inbetween numbers.
 * @n: number of arguments passed.
 *
 * Return: returns formatted printing of numbers.
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (seperator == NULL)
			continue;
		if (i + 1 == n)
			continue;
		printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}
