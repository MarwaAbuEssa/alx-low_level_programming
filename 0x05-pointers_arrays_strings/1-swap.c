#include "main.h"

/**
 * reset_to_98 - pointer to an as aparameter
 * @a: pointer first value
 * @b: pointer for second value
 */

void swap_int(int *a, int *b)
{
	int *temp = *a;
	*a = *b;
	*b = *temp;
}
