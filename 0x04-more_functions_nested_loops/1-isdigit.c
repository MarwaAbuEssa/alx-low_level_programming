#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function to check if digit
 *
 * @c: paramter of digit
 * Return: Success if not a digit
 */


int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
int main(void)
{
	    char c;

	        c = '0';
		    printf("%c: %d\n", c, _isdigit(c));
		        c = 'a';
			    printf("%c: %d\n", c, _isdigit(c));
			        return (0);
}
