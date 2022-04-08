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
	int flag = 0;
	
	while (flag <= 26)
	{
		putchar(s[flag]);
		flag = flag + 1;
	}
	putchar('\n');
	return (0);
}
