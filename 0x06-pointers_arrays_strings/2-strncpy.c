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
	int b;

	a = 0;
	b = 0;

	while (b <= n - 1)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	
	a = a;
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
