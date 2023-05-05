#include "main.h"

/**
 * flip_bits - flipped number
 * @n: the int
 * @m: number to be flipped
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, flipped = 0;

	xor = n ^ m;
	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (flipped);
}
