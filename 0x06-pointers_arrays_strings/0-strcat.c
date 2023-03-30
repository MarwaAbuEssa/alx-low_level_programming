#include "main.h"

/**
 *_strcat - pointer to an as aparameter
 * @dest: pointer param
 * @src: pointer second
 */

char *_strcat(char *dest, char *src)
{
	char *concat = dest + src;
	*dest = *concat;
	return (*dest);
}
