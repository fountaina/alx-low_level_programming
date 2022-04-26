#include "main.h"

/**
 * string_toupper - changes lower case in a string to uppercase
 * @a: the string to format
 *
 * Return: the formatted string
 */
char *string_toupper(char *a)
{
	int i;
	static char *r;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 65 && a[i] <= 90)
		{
			i++;
		}
		else if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
			i++;
		}
		else
		{
			i++;
			continue;
		}
	}
	r = a;
	return (r);
}
