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
	int i = 0, j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
