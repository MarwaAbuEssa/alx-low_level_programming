#include <stdio.h>
#include "main.h"

/**
 * print_times_table -  n times table.
 * @n: first param
 * Return: no return
 */

void print_times_table(int n)
{
	int i, j, prod;

	if (n >= 0 && n < 15)
	{
		for (i = 0 ; i <= n ; i++)
		{
			prod  = 0;
			for (j = 0 ; j <= n ; j++)
			{
				prod  = i * j;
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
