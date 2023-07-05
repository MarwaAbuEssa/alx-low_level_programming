#include "main.h"
#include <string.h>

/**
* isEqual - function to check if 2 char are equal
* @s: char array.
* @left: left index
* @right: right index
* Return: 1 or 0
*/

int isEqual(char *s, int left, int right)
{
	int result = 1;

	if (left > right)
		return (result);

	if (s[left] == s[right])
	{
		return (isEqual(s, left + 1, right - 1));
	}
	else
		return (0);
}

/**
* is_palindrome - if a string is a palindrome
* @s: char as input
* Return: return 1 or 0
*/
int is_palindrome(char *s)
{

	int ri = strlen(s) - 1;

	if (strlen(s) == 1)
		return (0);

	return (isEqual(s, 0, ri));
}

