#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data for a dog type
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);

#endif
