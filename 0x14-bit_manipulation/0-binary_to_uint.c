#include "main.h"

/**
 * binary_to_uint - convert to int
 * @b: pointer
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int init = 0, int_mult = 1;
	int len;

	if (b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		init += (b[len] - '0') * int_mult;
		int_mult *= 2;
	}
	return (init);
}
