#include "main.h"

/**
 * _strlen - pointer to an as aparameter
 * @s: pointer first value
 * Return: return length as integer
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
