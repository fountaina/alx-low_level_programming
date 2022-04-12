#include <stdio.h>
#include "main.h"
/**
 * main - prints _putchar.c
 *
 * Return: returns 0 on sucessful input
 */
int main(void)
{
	char n[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(n[i]);
	}
	_putchar('\n');
	return (0);
}
