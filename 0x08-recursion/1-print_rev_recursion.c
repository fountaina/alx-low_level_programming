#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse order
 * @s: the string to reverse
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	char **p;

	p = &s;
	p = (char *)(&s +1) - 1;
	if (s[0] == 0)
	{
		_putchar('\0');
	}
	else if (s[0] != '\0')
	{
		_putchar(p[0]);
		--s;
		_print_rev_recursion(s);
	}

}
