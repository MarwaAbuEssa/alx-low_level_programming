#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints Alphabets In Lower case
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}