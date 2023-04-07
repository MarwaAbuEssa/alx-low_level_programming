#include "main.h"
#include <string.h>

/**
 * strlen_no_wilds - Returns the length of a string
 * @str: The string to be measured
 * Return: The length
 */

int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;

		index++;
		len += strlen_no_wilds(str + index);
	}
	return (len);
}

/*
 * iterate_wild - Iterates through a string located at a wildcard
 * @wildstr: The string to be iterated through
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/*
 * postfix_match - Checks if a string str matches the postfix
 * @str: The string to be matched.
 * @postfix: The postfix.
 * Return: If str and postfix are identical
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}

/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: first string
 * @s2: second string
 * Return: return 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
