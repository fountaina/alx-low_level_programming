#include <stdio.h>
/**
 * _strncpy - copies and paste a string into another
 * @dest: the home string
 * @src: the string to be copied
 * @n: the amount of s2 that is copied
 *
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	a = a;

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
