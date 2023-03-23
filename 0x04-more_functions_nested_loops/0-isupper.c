#include <stdio.h>
#include "main.h"

/**
 * _isupper - function to check if charachter is uppercase
 *
 * @c: paramter of charachter
 * Return: Success if not upper case
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
