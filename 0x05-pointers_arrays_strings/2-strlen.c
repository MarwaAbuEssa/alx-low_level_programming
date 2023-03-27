#include "main.h"

/**
 * _strlen - pointer to an as aparameter
 * @s: pointer first value
 * Return: return length as integer
 */

int _strlen(char *s)
{
	char i;
	int len = 0;

	for (i = 0; *s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
