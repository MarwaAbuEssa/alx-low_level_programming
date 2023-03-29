#include "main.h"
#include <string.h>

/**
 * print_rev - pointer to an as aparameter
 * @s: pointer first value
 * Return: return length as integer
 */

void print_rev(char *s)
{
	int i;

	i = strlen(s);
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
