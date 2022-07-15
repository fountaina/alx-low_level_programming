#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 *
 * Return: returns the conctenated result
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}

	b = 0;
	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
