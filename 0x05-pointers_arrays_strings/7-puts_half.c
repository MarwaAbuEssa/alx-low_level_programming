#include "main.h"
#include <string.h>

/**
 * puts_half - pointer to an as aparameter
 * @str: pointer first value
 */

void puts_half(char *str)
{
	int i = 0, n = 0, len;

	while (str[i++])
		n++;

	if (n % 2 == 0)
	{
		len = n / 2;
	}
	else
	{
		len = (n + 1) / 2;
	}

	for (i = len;i < n; i++)
		putchar(str[i]);

	putchar('\n');
}
