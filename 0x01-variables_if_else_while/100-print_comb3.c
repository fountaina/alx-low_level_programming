#include <stdio.h>
/**
 * main - prints two digits
 * Description: prints all possible differrent combinations of 
 * two digits.
 * Return: returns 0 for success
 */
int main(void)
{
	int num1;
	int num2;
	int flag;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		putchar(num1);
		flag = 0;
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			putchar(num2);
			if (num1 + num2 != 18)
			{
				putchar(',');
				putchar(' ');
				if (flag != 9)
					putchar(num1);
					flag++;
			}
		}
	}
	return (0);
}
