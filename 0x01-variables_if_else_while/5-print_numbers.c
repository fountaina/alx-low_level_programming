#include <stdio.h>
/**
 * main - prints 0123456789
 * Description: prints all single digit numbers of base 10 starting
 * from 0, followed by a new line
 * Return: returns 0 on sucess
 */
int main(void)
{
	char num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
