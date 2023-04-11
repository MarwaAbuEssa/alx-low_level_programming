#include "main.h"

/**
 *_memcpy - pointer to an as aparameter
 * @dest: A pointer to the memory area to copy @src into
 * @src: The source buffer to copy characters from
 * @n: number of bytes
 * Return: A pointer to the destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
