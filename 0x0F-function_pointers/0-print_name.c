#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: name to be printed.
 * @f: A function that prints the message to be printed for the name.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
