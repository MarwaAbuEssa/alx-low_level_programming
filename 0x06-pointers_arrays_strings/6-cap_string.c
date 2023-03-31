#include "main.h"

/**
 * cap_string - strcmp from src to dest
 * @s: char param
 * Return: return char in upper case
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;

				if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
				|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
				|| s[i - 1] == '!' || s[i - 1] == '?' ||
				s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')'
				|| s[i - 1] == '{' || s[i - 1] == '}')
				s[i] = s[i] - 32;
	}

	return (s);
}
