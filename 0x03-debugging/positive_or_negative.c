#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints a random number
 * Description - What the hell. Aah!
 * Return: returns 0 on sucessful run
 */
int positive_or_negative(n)
{
	int n;

	//srand(time(0));
	//n = rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf("%i is positive\n", n);
	if (n == 0)
		printf("%i is zero\n", n);
	if (n < 0)
		printf("%i is negative\n", n);
	return (0);
}
