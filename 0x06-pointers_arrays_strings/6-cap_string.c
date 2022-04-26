#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @a: the string to be capitalized
 *
 * Return: the formatted string
 */
char *cap_string(char *a)
{
	int i;
	static char *formatted_string;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i - 1] == 32 || a[i - 1] == 44 || a[i - 1] == 59
				|| a[i - 1] == 46 || a[i - 1] == 33
				|| a[i - 1] == 63 || a[i - 1] == 34 ||
				a[i - 1] == 40 || a[i - 1] == 41 ||
				a[i - 1] == 123 || a[i - 1] == 125 ||
				a[i - 1] == 10 || a[i - 1] == 9)
		{
			if (a[i] >= 97 && a[i] <= 122)
			{
				a[i] = a[i] - 32;
				i++;
			}
			else if (a[i] >= 65 && a[i] <= 90)
			{
				i++;
			}
			else
			{
				i++;
				continue;
			}
		}
		else
		{
			/*printf("This character was not formatted: %c\n", a[i]);*/
			i++;
			continue;
		}
	}
	formatted_string = a;
	return (formatted_string);
}
