#include "main.h"

/**
 * leet - strcmp from src to dest
 * @s: char param
 * Return: return char in upper case
 */

char *leet(char *s)
{
	int i = 0, j;
	char leet[5] = { 'a', 'e', 'o', 't', 'l' };
	char leet_rep[5] = { 4, 3, 0, 7, 1 };

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == leet[j] || s[i] - 32 == leet[j])
				s[i] = leet_rep[j] + '0';
		}
		i++;
	}

	return (s);
}
