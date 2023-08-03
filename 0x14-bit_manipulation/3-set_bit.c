#include "main.h"

/**
 * set_bit - set value at index
 * @n: pointer to bit
 * @index: index to set value
 * Return: -1 if out of index otherwise 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}
