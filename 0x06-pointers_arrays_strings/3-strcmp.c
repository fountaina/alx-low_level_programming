#include "main.h"
#include <stdio.h>

/**
 * _strcmp - comparison of two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: return 0 if they match, negative int if s1 < s2
 * and positive value if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	unsigned char tester1;
	unsigned char tester2;

	i = 0;
	tester1 = '0';
	tester2 = '0';
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		tester1 = s1[i] + tester1;
		tester2 = s2[i] + tester2;
		i++;
	}
	/**
	*printf("This is the value of s1: %d\n", tester1);
	*printf("This is the value of s2: %d\n", tester2);
	*/

	if (tester1 == tester2)
	{
		return (0);
	}
	else if (tester1 > tester2)
	{
		return (15);
	}
	else
	{
		return (-15);
	}

}
