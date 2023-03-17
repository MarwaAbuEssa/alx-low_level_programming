#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 * @parameter: describe the parameter
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 'A' ; i <= 'Z' ; i++)
	{
		char small = tolower(i);

		putchar(small);
	}
	return (0);
}
