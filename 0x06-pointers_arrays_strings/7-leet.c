#include "main.h"

/**
 * leet - strcmp from src to dest
 * @s: char param
 * Return: return char in upper case
 */

char *leet(char *s)
{
	int i = 0, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (i = 0; j <= 7; j++)
		{
			if (s[i] == leet[j] || s[i] - 32 == leet[j])
				s[i] = j + '0';
		}
		i++;
	}

	return (s);
}
