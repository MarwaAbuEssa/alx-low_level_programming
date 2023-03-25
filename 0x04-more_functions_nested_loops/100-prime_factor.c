#include <stdio.h>
#include "main.h"

/**
 *main - Entry point
 *Return: no return
 */

int main(void)
{
	long int n;

	n = 612852475143;
	long int div = 2, maxFact;

	while (n != 0)
	{
		if (n % div != 0)
			div += 1;
		else
		{
			maxFact  = div;
			n = n / div;
			if (n == 1)
			{
				printf("%lu is the largest prime factor\n", maxFact);
				break;
			}
		}
	}
	return (0);
}
