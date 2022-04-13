#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number inputed by the user
 *
 * Return: returns 1 and prints + if n > 0
 * returns 0 and prints 0 if n is 0
 * returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	} else if (n == 0)
	{
		value = 0;
		_putchar('0');
	} else
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}

