#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 *
 * Return: Always o Success
 */

int main(void)
{
	int i, out;

	i = 98;
	out = positive_or_negative(i);
	if (out == (i + " is positive"))
		return (0);
	else
		return (1);
}
