#include "main.h"

/**
 *_strspn - get the length of a prefix substring
 * @s: A pointer to the memory area to search
 * @accept: prefix
 * Return: A pointer to the result memory
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int bytes = 0;

	while (*s)
	{
		for (i = 0; accept[i] ; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}

	return (bytes);
}
