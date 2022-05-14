#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "3-calc.h"
#include "string.h"

/**
 * main - performs arithmetic on two int
 * @argc: the command line argument counter
 * @argv: command line argument vector
 *
 * Return: the arithemitic operation on the two int
 */
int main(int argc, char *argv[])
{
	int f, a, b;
	char *s;

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];
	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[2]) == '/' || *(argv[2]) == '%')
	{
		if (argv[3] == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}
	/*
	if (
	(strcmp(argv[2], "+") &&
	(strcmp(argv[2], "-") &&
	(strcmp(argv[2], "*") &&
	(strcmp(argv[2], "/") &&
	(strcmp(argv[2], "%"))))))
	)
	{
		printf("Error\n");
		exit(99);
	}*/
	f = get_op_func(s)(a, b);
	printf("%d\n", f);
	return (0);
}
