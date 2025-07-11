#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog struct
 * @d: pointer to the dog struct to free
 **/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
