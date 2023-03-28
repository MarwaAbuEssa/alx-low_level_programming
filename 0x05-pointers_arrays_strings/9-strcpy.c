#include "main.h"
#include <string.h>

/**
 * _strcpy - pointer to an as aparameter
 * @dest: pointer first value
 * @src: param
 * Return: return destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
