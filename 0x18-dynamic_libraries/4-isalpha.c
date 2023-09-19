#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Check charachter is Alphabet or not
 * @c: The character to be checked.
 * Return: 1 if character is alpha, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
