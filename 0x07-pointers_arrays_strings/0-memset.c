#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory area pointed by s
 * @b: constant byte to fill the memory
 * @n: the number of bytes in memory to fill
 *
 * Return: a string of the formatted array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	counter = 0;
	while (counter < n)
	{
		s[counter] = b;
		counter++;
	}
	return (s);
}
