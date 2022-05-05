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
 * _strcpy - returns a copy of a sting
 * @dest: destination of copied string
 * @src: the string to be copied
 *
 * Return: returns the string
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a pararmeter.
 * @str: the given string
 *
 * Return: returns the pointer
 */
char *_strdup(char *str)
{
	char *dest;

	dest = (char *) malloc(_strlen(str) + 1);
	if (str == 0)
	{
		return (NULL);
	}
	_strcpy(dest, str);
	return (dest);
}
