#include "main.h"
#include <stdio.h>


int reverser(char *s, char *a, int l)
{
	if (*s != '\0')
	{
		reverser(s + 1, a, l + 1);
		if (l >= 0);
		printf("%c", a[l]);
	}
}

int main()
{
	reverser("level", "", 0);
}

