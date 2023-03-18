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
        char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

        for (i = 0; i < 52 ; i++)
        {
                putchar(alpha[i]);
        }
        putchar('\n');
        return (0);
}
