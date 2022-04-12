#include <stdio.h>
#include "main.h"

/**
 * main - prints the alphabets
 *
 * Return: 0 on sucessful output
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	return (0);
}
