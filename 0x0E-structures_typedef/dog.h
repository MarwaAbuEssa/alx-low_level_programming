#ifndef DOG_H
#define DOG_H
#include "main..h"
/**
 *struct dog - dog type
 *@name: The name
 *@age: The age
 *@owner: The owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;


#endif
