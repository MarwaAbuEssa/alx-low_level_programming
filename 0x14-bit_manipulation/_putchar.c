#include "main.h"
#include <unistd.h>

/**
 * _putchar - char c to stdout
 * @c: charachter to be printed
 * Return: succuess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
