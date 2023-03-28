#include "main.h"
#include <string.h>

/**
 * print_array - pointer to an as aparameter
 * @a: pointer first value
 * @n: param
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		printf(", ");
	}

	putchar('\n');
}
