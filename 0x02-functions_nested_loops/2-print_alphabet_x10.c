#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print Alphabets In Lower case 10 Times
 *
 */

void print_alphabet_x10(void)
{
	char i;
	int j = 0;

	while (j <= 10)
	{
	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	j++;
	}
}
