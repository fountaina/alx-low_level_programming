#include <stdio.h>

/**
 * main - print all alphabet
 * Description: this prints all alphabet to stdout using
 * putchar from a predefined string
 * Return: returns 0 on sucessful output
 */
int main(void)
{
	char s[27] = "abcdefghijklmnopqrstuvwxyz";
	int flag;

	for (flag = 0; flag <= 26; flag++)
		putchar(s[flag]);
	putchar('\n');
	return (0);
}
