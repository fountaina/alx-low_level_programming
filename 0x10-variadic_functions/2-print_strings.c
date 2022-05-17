#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings -  prints strings followed by new line
 * @seperator: this is what is printed between strings.
 * @n: number of optional arguments.
 *
 * Return: returns the formatted string.
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str =  va_arg(ap, char *);
		if (str == NULL || str == "\0")
			printf("(nil)");
		printf("%s", str);
		if (seperator == NULL || i + 1 == n)
			break;
		printf("%s", seperator);
	}
	printf("\n");
	va_end(ap);
}
