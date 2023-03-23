#include <stdio.h>
#include "main.h"

/**
 *print_most_numbers - print numbers from 0 to 9
 *
 *Return: no return
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if ( i != 2 && i != 4)
		putchar(i + '0');
	}
	putchar('\n');
}
