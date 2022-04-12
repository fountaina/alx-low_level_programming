#include <stdio.h>
#include "main.h"
/**
 * main - prints _putchar.c
 *
 * Return: returns 0 on sucessful input
 */
int main(void)
{
	char n[9] = "_putchar";
	int i;

	i = 0;
	while (i < 9)
	{
		_putchar(n[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
