#include "main.h"

/**
 *_strncpy - copy n from src to dest
 * @dest: pointer param
 * @src: pointer second
 * @n: size of bytes to concatenate
 * Return: return concat pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for ( ; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
