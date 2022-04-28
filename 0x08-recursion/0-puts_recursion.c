#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: the string to be written
 *
 * Return: returns the string
 */
void _puts_recursion(char *s)
{
	_putchar(s[0]);
	s++;
	if (s[0] != 0)
	{
		_puts_recursion(s);
	}
	else if (s[0] == 0)
	{
		_putchar('\n');
	}
}
