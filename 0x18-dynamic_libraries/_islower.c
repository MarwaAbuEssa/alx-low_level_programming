#include <stdio.h>
#include "main.h"

/**
 * _islower - Check charachter is lower case or not
 * @c: The character to be checked.
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
