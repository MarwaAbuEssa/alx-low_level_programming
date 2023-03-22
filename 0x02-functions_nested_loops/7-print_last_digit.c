#include <stdio.h>
#include "main.h"

/**
 *  print_last_digit -  prints the last digit of a number
 * @n: The character to be checked.
 * Return: return last digit of a number
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	(last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
