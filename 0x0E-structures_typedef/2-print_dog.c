#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the name, age and owner of a dog
 * @d: the pointer to the struct dog
 *
 * Return: return nothing if d is NULl
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(1);
	}
	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == 0)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
