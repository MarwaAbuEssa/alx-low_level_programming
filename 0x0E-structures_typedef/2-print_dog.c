#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - print dog
 * @d: dog struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(null)";
	if (d->owner == NULL)
		d->owner = "(null)";
	printf("Name: %s\nAge: %f\nowner: %s\n", d->name, d->age, d->owner);
}

