#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of two int
 * @a: the first int
 * @b: the second int
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two int
 * @a: the first int
 * @b: the second int
 *
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two int
 * @a: the first int
 * @b: the second int
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of two int
 * @a: the first int
 * @b: the second int
 *
 * Return: the result of division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of division of two int
 * @a: the first int
 * @b: the second int
 *
 * Return: the remainder of a / b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
