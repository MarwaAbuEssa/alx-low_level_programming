#include "main.h"

/**
 *_strpbrk - get the length of a prefix substring
 * @s: A pointer the memory area to search
 * @accept: prefix
 * Return: A pointer to the result memory
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] ; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return ('\0');
}
