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
	char alpha[26] = "zyxvutsrqpomnlkjihgfedcba";

	for (i = 26; i >= 0 ; i--)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
