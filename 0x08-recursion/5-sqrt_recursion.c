#include "main.h"

/**
 * find_sqrt - fractinoal of number
 * @num: The number to find the square root of.
 * @root: The root to be tested
 * Return: return length
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - fractinoal of number
 * @n: char as input
 * Return: return length
 */
int _sqrt_recursion(int n)
{

	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
