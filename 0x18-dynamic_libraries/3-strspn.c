#include "main.h"

/**
 * _strspn - gets the length of a prefix substing
 * @s: the string to be scanned
 * @accept: the string containing the list of characters to match in s
 *
 * Return: returns an int value of the number of initial characters
 * matched
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter1;
	int counter2;
	unsigned int length;
	int i;

	counter1 = 0;
	counter2 = 0;
	length = 0;
	while (accept[counter1] != '\0')
	{
		counter1++;
	}
	while (counter2 <= counter1)
	{
		i = 0;
		while (i <= counter1)
		{
			if (s[counter2] == accept[i])
			{
				length++;
				i++;
			}
			else if (s[counter2] != accept[i])
			{
				i++;
				continue;
			}
		}
		counter2++;
	}
	return (length);
}
