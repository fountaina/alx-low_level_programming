#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog with data type dog_t
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;

	(*dog_new).name = name;
	dog_new->age = age;
	dog_new->owner = owner;
	if (dog_new == NULL)
		return (NULL);
	return (dog_new);
}
