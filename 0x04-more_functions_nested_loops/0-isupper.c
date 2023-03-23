#include <stdio.h>
#include "main.h"

/**
 * _isupper - function to check if charachter is uppercase
 *
 * @c: paramter of charachter
 * return: Success if not upper case
 */

int _isupper(int c)
{
	for (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
