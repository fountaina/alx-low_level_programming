#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - gets the length of a string
 * @str: the string
 *
 * Return: the length of str
 */
int _strlen(char *str)
{
	int counter;
	unsigned int length = 0;

	for (counter = 0; str[counter] != '\0'; counter++)
	{
		length++;
	}
	return (length);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of the second string to concatenate to the first
 * string
 *
 * Return: the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length2;
	char *new_concat;
	int marker, counter;
	int num_s2;

	new_concat = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (new_concat == NULL)
	{
		return (NULL);
	}
	for (marker = 0; marker < _strlen(s1); ++marker)
	{
		new_concat[marker] = s1[marker];
	}
	length2 = _strlen(s2);
	if (n < length2)
	{
		num_s2 = n;
	}
	else
	{
		num_s2 = length2;
	}
	for (counter = 0; counter < num_s2; ++counter)
	{
		new_concat[marker] = s2[counter];
		++marker;
	}
	return (new_concat);
}
