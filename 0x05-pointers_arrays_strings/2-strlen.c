#include "main.h"

/**
 * _strlen - pointer to an as aparameter
 * @s: pointer first value
 * Return: return length as integer
 */

int _strlen(char *s)
{
	int i;
	int n = sizeof(*s);
	int len = 0;

	for (i = 0; i < n; i++)
	{
		len++;
	}
	return (len);
}
