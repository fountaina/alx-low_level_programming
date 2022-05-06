#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @str: the string
 *
 * Return: the length
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: NULL on failure, or concatenated string if successfull
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2;
	char *concat_str;

	concat_str = (char *) malloc((_strlen(s1)) + (_strlen(s2) + 1));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
		concat_str[l1] = s1[l1];
	}
	for (l2 = 0; s2[l2] != '\0'; l2++)
	{
		concat_str[l1] = s2[l2];
		l1++;
	}
	return (concat_str);
}
