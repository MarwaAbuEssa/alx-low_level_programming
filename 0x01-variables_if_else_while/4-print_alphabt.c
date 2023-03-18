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
	int i;
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26 ; i++)
	{
		if (i != 4 && i != 16)
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
