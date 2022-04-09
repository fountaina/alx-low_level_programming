#include <stdio.h>
/**
 * main - prints the alphabet expect q and e
 * Descriptions: prints all the 26 alphabets but skips q and e
 * Return: returns 0 on sucess
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		if (alpha == 'e')
		{
			alpha++;
		} else if (alpha == 'q')
		{
			alpha++;
		} else
		{
			putchar(alpha);
			alpha++;
		}
	}
	putchar('\n');
	return (0);
}
