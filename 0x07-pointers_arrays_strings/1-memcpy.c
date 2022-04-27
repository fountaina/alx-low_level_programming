#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the array to be copied into
 * @src: the string to copy
 * @n: the number of characters to copy
 *
 * Return: returns a char of the new string(dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	counter = 0;
	while (counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}
	return (dest);
}
