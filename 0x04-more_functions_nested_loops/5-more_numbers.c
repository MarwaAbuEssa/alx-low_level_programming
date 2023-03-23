#include <stdio.h>
#include "main.h"

/**
 *more_numbers - print numbers from 0 to 9
 *
 *Return: no return
 */

void more_numbers(void)
{
	int i, mult = 0;

	while (mult <= 10)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i > 10)
			{
				putchar((i / 10) + '0');
			}
			putchar((i % 10) + '0');
		}
		mult++;
		putchar('\n');
	}
}
