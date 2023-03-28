#include "main.h"
#include <string.h>

/**
 * print_rev - pointer to an as aparameter
 * @s: pointer first value
 * Return: return length as integer
 */

void print_rev(char *s)
{
	int i, len, temp;

	len = strlen(s);
	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	 printf("%s\n", s);
}
