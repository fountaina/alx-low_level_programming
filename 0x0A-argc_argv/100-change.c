#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for
 * an amount of money
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 on succes
 */
int main(int argc, char **argv)
{
	int result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 1)
	{
		result = 0;
	}
	else if (atoi(argv[1]) == 1 || atoi(argv[1]) == 2)
	{
		result = 1;
	}
	else if (atoi(argv[1]) > 2 && atoi(argv[1]) < 5)
	{
		result = 1 + (atoi(argv[1]) - 2);
	}
	else if (atoi(argv[1]) >= 5 && atoi(argv[1]) < 10)
	{
		result = 1 + (atoi(argv[1]) - 5);
	}
	else if (atoi(argv[1]) >= 10 && atoi(argv[1]) < 25)
	{
		result = 1 + (atoi(argv[1]) - 10);
	}
	else if (atoi(argv[1]) >= 25)
	{
		result = 1 + (atoi(argv[1]) - 25);
	}
	else if (atoi(argv[1]) < 0)
	{
		result = 0;
	}
	printf("%d\n", result);
	return (0);
}
