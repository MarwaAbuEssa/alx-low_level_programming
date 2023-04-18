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
		d->name = "(nil)";
	if (d->age < 0)
		d->age = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nowner: %s\n", d->name, d->age, d->owner);
}

