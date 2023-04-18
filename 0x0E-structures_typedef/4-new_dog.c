#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner);

/**
 * new_dog - New dog
 * @name: The name
 * @age: the age
 * @owner: The owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	dogg->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo);
		return (NULL);
	}
	doggo->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = strcopy(doggo->owner, owner);

	return (doggo);
}
