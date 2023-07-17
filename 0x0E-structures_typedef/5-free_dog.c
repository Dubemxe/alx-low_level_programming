#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocate for struct dog
 * @d: struct dog to free
 * Return: Nothing!
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
