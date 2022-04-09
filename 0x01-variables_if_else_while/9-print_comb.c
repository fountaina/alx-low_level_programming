#include <stdio.h>
/**
 * main - print single-digit numbers
 * Description: prints all combinations of single-digit numbers
 * Return: returns 0 on sucessful run
 */
int main(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
			num++;
		} else
			num++;
	}
	putchar('\n');
	return (0);
}
