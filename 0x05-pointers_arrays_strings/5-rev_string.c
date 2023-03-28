#include "main.h"
#include <string.h>

/**
 * rev_string - pointer to an as aparameter
 * @s: pointer first value
 * Return: return length as integer
 */

void rev_string(char *s)
{
	int i, n, temp;

	n = strlen(s);
	for (i = n - 1; i >= n / 2; i--)
	{
		temp = s[n - 1 - i];
		s[n - 1 - i] = s[i];
		s[i] = temp;
	}
}
