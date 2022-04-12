#include "main.h"

/**
 * print_alphabet - prints out the alphabets
 * Return: 0 on sucessful output
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
