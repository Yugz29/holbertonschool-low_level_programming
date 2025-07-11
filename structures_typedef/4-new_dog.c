#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	if (name == NULL || owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(strlen(name) + 1);

	if (new_dog->name == NULL)
	{
		free(new-dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);

	new_dog->owner = malloc(strlen(owner) + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->owner, owner);

	new_dog-> = age;

	return (new_dog);
}
