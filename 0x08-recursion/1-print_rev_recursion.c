#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse order
 * @s: the string to reverse
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == 0)
	{
		_putchar('\n');
	}
	else if (s[0] != 0)
	{
		_putchar((char *)(&s + 1) - 1);
		s--;
		_print_rev_recursion(s);
	}
}
