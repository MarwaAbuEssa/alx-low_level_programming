#include <stdio.h>
#include "main.h"

/**
 *  print_to_98-  su of 2 intminut
 * @n: first param
 * Return: int of summation
 */

void print_to_98(int n)
{
	if (n >= 89)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
