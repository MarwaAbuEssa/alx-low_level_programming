#include "main.h"

/**
 *_memset - pointer to an as aparameter
 * @s: pointer to the memory
 * @b: character to fill
 * @n: number of bytes
 * Return: A pointer to the filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
