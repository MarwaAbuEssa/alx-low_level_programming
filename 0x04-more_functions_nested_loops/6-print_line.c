#include <stdio.h>
#include "main.h"

/**
 *print_line - draw a straight line in terminal
 *@n: integer as input param
 *Return: no return
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			putchar('_');
		}
	}
	putchar('\n');
}
