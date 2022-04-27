#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to find
 *
 * Return: the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int counter;
	static char finder_str[98];
	int finder_str_counter;
	int i;

	counter = 0;
	finder_str_counter = 0;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (counter <= i)
	{
		if (s[counter] == c)
		{
			while (s[counter] != '\0')
			{
				finder_str[finder_str_counter] = s[counter];
				counter++;
				finder_str_counter++;
			}
			break;
		}
		else
		{
			counter++;
			continue;
		}
	}
	return (finder_str);
}
