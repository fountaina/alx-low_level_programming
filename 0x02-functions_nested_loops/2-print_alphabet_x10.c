#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: returns 0 on success
 */
void print_alphabet_x10(void)
{
	int num_of_lines;
	char alpha;

	num_of_lines = 1;
	while (num_of_lines <= 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		num_of_lines++;
	}
}
