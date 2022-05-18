#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 * @a: the address of the main function
 * @n: the number of bytes
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%.2hhx", a[b])
		if (b < n -1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes for itself
 * @argc: number of arguments passed to its function
 * @argv: argument vector.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	n = atoi(argv[1]);
	a = (char *)&main;
	print_opcodes(a, n);
	return (0);
}

