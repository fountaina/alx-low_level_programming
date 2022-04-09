#include <stdio.h>
/**
 * main - prints all the hexes
 * Description: prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: returns 0 on sucess
 */
int main(void)
{
	char num;
	char hex_alpha;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (hex_alpha = 'a'; hex_alpha <= 'f'; hex_alpha++)
		putchar(hex_alpha);
	putchar('\n');
	return (0);
}
