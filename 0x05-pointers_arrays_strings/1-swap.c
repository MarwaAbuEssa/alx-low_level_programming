#include "main.h"

/**
 * swap_int - pointer to an as aparameter
 * @a: pointer first value
 * @b: pointer for second value
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
