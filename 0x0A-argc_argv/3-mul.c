#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers from command line input
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int result;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
