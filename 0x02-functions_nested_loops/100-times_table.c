#include <stdio.h>
#include "main.h"

/**
 * print_times_table -  n times table.
 * @n: first param
 * Return: no return;
 */

void print_times_table(int n)
{
	int i, j, prod;

	if (n >= 0 && n < 15)
	{
		for (i = 0 ; i <= n ; i++)
		{
			_putchar('0');
			prod  = 0;
			for (j = 1 ; j <= n ; j++)
			{
				_putchar(',');
				_putchar(' ');
				prod  = i * j;
				if (prod <= 99 || prod <= 9)
					_putchar(' ');
				else if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((((prod / 10)) % 10 + '0'));
				}
				else if (prod <= 99 && prod >=10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
