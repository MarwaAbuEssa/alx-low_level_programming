#include <stdio.h>
#include "main.h"

/**
 *print_square - draw a square
 *@size: integer as input param
 *Return: no return
 */

void print_square(int size)
{
	int c, i;

	for (c = 0 ; c < size; c++)
	{
		for (i = 0 ; i < size ; i++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
