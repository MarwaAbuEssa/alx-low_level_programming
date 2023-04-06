#include "main.h"

/**
 * factorial - fractinoal of number
 * @n: char as input
 * Return: return length
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
