#include <stdio.h>
#include <stdlib.h>

/**
 * find_size - finds the number of chars give as command line 
 * arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return - the total number of chars given as argument
 */
int find_size(int argc)
{
	int n;
	int size = 0;

	for (n = 1; n <= argc; n++)
	{
		size = size + 1;
	}
	return (size);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument counter
 * @av: a string of the command line arguments
 *
 * Return: returns the concatenated form of all the arguments
 */
char *argstostr(int ac, char **av)
{
	char **concat_str;
	int n;
	int size;
	
	if (ac != 0 || av != NULL)
	{
		size = find_size(ac);
		concat_str = (char **) malloc(sizeof(char *) * size);
		if (concat_str == NULL)
		{
			return (NULL);
		}
		for (n = 0; n < ac; n++)
		{
			concat_str[n] = av[n];
			return (concat_str[n]);
		}
	}
	return (NULL);
}
