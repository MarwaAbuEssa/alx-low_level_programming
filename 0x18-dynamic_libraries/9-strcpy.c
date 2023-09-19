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

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
