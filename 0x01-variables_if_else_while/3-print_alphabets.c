#include <stdio.h>
/**
 * main - prints the alphabets
 * Descriptions: prints the alphabets in lower and uppercase
 * Return: returns 0 on sucess
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
