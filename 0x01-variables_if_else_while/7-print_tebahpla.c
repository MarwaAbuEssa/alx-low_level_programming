#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a' ; i--)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
