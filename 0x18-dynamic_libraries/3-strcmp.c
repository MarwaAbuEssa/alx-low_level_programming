#include "main.h"

/**
 *_strcmp - strcmp from src to dest
 * @s1: pointer param
 * @s2: pointer second
 * Return: return concat pointer
 */

int _strcmp(char *s1, char *s2)
{
	int result, i;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++)
	;

	if (s1[i] == s2[i])
		result = 0;
	else
		result = s1[i] - s2[i];

	return (result);
}
