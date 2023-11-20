#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = strdup(name);
	if (!my_dog->name)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->age = age;
	my_dog->owner = strdup(owner);
	if (!my_dog->owner)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	return (my_dog);

}
