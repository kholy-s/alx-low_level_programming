#include "dog.h"

/**
 * free_dog - frees dogs.
 * @d: the address of the dog.
 **/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
