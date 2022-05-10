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
	unsigned int length;

	length = 0;
	for (counter = 0; str[counter] != '\0'; counter++)
	{
		length = length + 1;
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
	unsigned int len_s1, len_s2, i;
	char *new_concat;

	if (s1 == NULL)
	{
		len_s1 = 0;
	}
	else
	{
		for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
			;
	}
	if (s2 == NULL)
	{
			len_s2 = 0;
	}
	else
	{
		for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
			;
	}
	if (len_s2 > n)
	{
		len_s2 = n;
	}
	new_concat = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (new_concat == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
	{
		new_concat[i] = s1[i];
	}
	for (i = 0; i < len_s2; i++)
	{
		new_concat[i + len_s1] = s2[i];
	}
	new_concat[i + len_s1] = '\0';
	return (new_concat);
}
