#include <stdio.h>
#include "main.h"

/**
 *more_numbers - print numbers from 0 to 9
 *
 *Return: no return
 */

void more_numbers(void)
{
	int i, mult;

	for (i = 0 ; i <= 14 ; i++)
	{
		mult = i * 10;
		putchar((mult / 10) + '0');
	}
	putchar('\n');
}
