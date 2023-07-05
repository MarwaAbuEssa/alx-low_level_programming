#include "main.h"
#include <string.h>
/**
*_puts_recursion - prints a string, followed by a new line
* @s: char as input
*/

void _puts_recursion(char *s)
{

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
