#include "main.h"

/**
 * _strlen_recursion - get string length
 * @s: char as input
 * Return: return length
 */

int _strlen_recursion(char *s)
{

	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
