#include "main.h"
#include <string.h>

/**
 * puts2 - pointer to an as aparameter
 * @str: pointer first value
 */

void puts2(char *str)
{
	int i = 0, n = 0;

	while (str[i++])
		n++;

	for (i = 0; i < n ; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
