#include <stdio.h>

/**
 * main - print all alphabet
 * Description: this prints all alphabet to stdout using
 * Return: returns 0 on sucessful output
 */
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
		putchar(s);
	putchar('\n');
	return (0);
}
