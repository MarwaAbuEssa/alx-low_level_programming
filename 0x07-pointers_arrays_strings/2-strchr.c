#include "main.h"

/**
 *_strchr - pointer to an as aparameter
 * @s: A pointer to the memory area to search
 * @c: charachter to search in memory
 * Return: A pointer to the result memory
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *result = '\0';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			result = &s[i];
	}

	return (result);
}
