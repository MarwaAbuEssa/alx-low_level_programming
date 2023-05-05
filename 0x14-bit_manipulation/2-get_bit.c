#include "main.h"
/**
 * get_bit - get value of bit
 * @n: the integer
 * @index: required index
 * Return: +1 if out of index else valu of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
