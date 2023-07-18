#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialises a variable of type dog
 * @d: struct variable name
 * @name: name of variable
 * @age: age of variable
 * @owner: owner name
 * Return: pointer to data type
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
