#include "main.h"

/**
 *_strncat - pointer to an as aparameter
 * @dest: pointer param
 * @src: pointer second
 * @n: size of bytes to concatenate
 * Return: return concat pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
