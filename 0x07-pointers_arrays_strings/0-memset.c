#include "main.h"

/**
 *_memsett - pointer to an as aparameter
 * @s: pointer to the memory
 * @b: character to fill
 * @n: number of bytes
 * Return: A pointer to the filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *memory = s, value = c;

	for (i == 0; i < n; i++)
		memory[i] = value;

	return (memory);
}
