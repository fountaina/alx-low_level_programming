#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the input string
 *
 * Return: the int of length of string
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (s[0] == '\0')
	{
		return (0);
	}
	else if (s[0] != '\0')
	{
		len++;
	}
	return (len + _strlen_recursion(s + 1));
}
