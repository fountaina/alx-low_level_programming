#include <stdio.h>
#include "main.h"

/**
 * main - prints the alphabets
 * 
 * print_alphabet - prints out the alphabets
 * Description -  prints out the alphabts
 * Return: 0 on sucessful output
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);	
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
