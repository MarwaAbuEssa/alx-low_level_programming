#include "main.h"

/**
 * clear_bit - set the value of a bit
 * @n: pointer to bit
 * @index: index to be set
 * Return: -1 if out of index
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (1);
	}

	*n &= ~(1 << index);
	return (1);
}
