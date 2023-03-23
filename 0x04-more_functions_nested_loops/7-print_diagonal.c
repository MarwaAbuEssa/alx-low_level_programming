#include <stdio.h>
#include "main.h"

/**
 *print_diagonal - draw a diagonal line
 *@n: integer as input param
 *Return: no return
 */

void print_diagonal(int n)
{
	int c, i;

	c = 0;

	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			putchar(' ');
			i--;
		}
		putchar('\\');
		putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		putchar('\n');
}
