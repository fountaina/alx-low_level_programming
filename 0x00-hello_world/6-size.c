#include <stdio.h>
/**
 * main - prints the sizeof types
 * Description - print the size in byte of the mentioned types
 * Return: returns 0 for sucessful run
 */
int main(void)
{
	printf("Size of a char: %lu\n", sizeof(char));
	printf("Size of an int: %lu\n", sizeof(int));
	printf("Size of long int: %lu\n", (long)sizeof(int));
	printf("Size of long long int: %lu\n", (long long)sizeof(int));
	printf("Size of float: %lu\n", sizeof(char));
	return (0);
}
