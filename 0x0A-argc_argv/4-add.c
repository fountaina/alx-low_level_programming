#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds postive numbers from command line arguments
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: returns 0 on success
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		sum = 0;
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) >= 1)
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
