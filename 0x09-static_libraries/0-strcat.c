#include "main.h"

/**
 *_strcat - pointer to an as aparameter
 * @dest: pointer param
 * @src: pointer second
 * Return: return concat pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
