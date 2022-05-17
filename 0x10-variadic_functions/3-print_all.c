#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - the function prints anyting
 * @format: the type of arguments passed to the function
 *
 * Return: returns the parameters given.
 */
void print_all(const char * const format, ...)
{
	__attribute__ ((format (printf, 1, 2)));
	
	va_list ap;
	int i;
	
	va_start(ap, format)
	for (i < )
}
