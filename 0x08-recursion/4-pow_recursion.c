#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: The number to be raised by an exponetial
 * @y: The exponential of x
 *
 * Returns: the reuslt of the arithemetic and -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
