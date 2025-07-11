#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable on type struct dog
 * @d: pointer to the structure to be initialized
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 *
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
