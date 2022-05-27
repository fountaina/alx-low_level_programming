#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isdigit - checks if parameter is a number between 0 to 9.
 * @c: input number.
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * main - multiplies two command line argument
 * @argc - argument counter
 * @argv -argument vector
 *
 * Return - the multiplied result
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int a, b;
	int result;
	
	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	else 
	{
		for (; argv[i] != 0; i++)
		{
			if (!isdigit(argv[i]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	return (result);
}
