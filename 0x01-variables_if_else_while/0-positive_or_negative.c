#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - prints a random number
 * @n: this is the variable that stores the random number
 *
 * Description: simply prints a random number each time the code is run
 * Return: returns 0 on sucessful run
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	if (n == 0)
		printf("%i is zero\n", n);
	if (n < 0)
		printf("%i is negative\n", n);
}
