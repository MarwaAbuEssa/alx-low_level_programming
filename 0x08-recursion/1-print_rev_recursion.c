#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints a reverse string
 * @s: char as input
 */

void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
