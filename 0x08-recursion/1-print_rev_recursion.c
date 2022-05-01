#include "main.h"
#include <stdio.h>
/**
 * string_looper - loops through the string and returns it in reverse order
 * @s: the string
 * @l: the int that stores the length of the string
 *
 * Return: a reversed string
 */
char string_looper(char *s, int l)
{
	if (s[l] == '\0')
	{
		return (l);
	}
	else
	{
		return (string_looper(s, l + 1));
	}
}
void string_reverser(char *s, int l)
{
	if (s[l] == '\0')
	{
		l--;
	}
	_putchar(s[l]);
	if (s[l] != 0)
	{
		string_reverser(s, l - 1);
	}
	/*else if (s[l] == 0)
	{
		_putchar('\0');
	}*/
}
/**
 * _print_rev_recursion - prints a string in reverse order
 * @s: the string to reverse
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int l;

	l = string_looper(s, 0);
	string_reverser(s, l);
}
