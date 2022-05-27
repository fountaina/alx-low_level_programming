#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file the code is running from
 * Return: returns 0 on success.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
