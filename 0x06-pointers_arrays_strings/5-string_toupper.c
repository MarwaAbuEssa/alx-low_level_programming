#include "main.h"

/**
 * string_toupper - strcmp from src to dest
 * @*: char param 
 * Return: return chat in upper case
 */

char *string_toupper(char *)
{
	int i = 0;

	while (*[i] != '\0')
	{
		if (*[i] >= 'a' && *[i] <= 'z')
		{
			*[i] = *[i] - 32;
		}
		i++;
	}

	return (*);
}
