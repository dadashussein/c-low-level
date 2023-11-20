#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function with single argument
 * @d: pointer type
 *
 * Description: frees dogs
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
