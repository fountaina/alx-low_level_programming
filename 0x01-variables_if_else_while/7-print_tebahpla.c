#include <stdio.h>
/**
 * main - prints alphabet in reverse
 * Description: prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: returns 0 on sucess
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
