#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - print numbers from 0 to 9
 * @c: input charachter
 * Return: return putchar
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}

/**
 *print_numbers - print numbers from 0 to 9
 *
 *Return: no return
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
