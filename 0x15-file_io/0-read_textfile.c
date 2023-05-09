#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read text from file
 * @filename: path pf file to read data
 * @letters: number of charchters to read
 * Return: 0 if fails or number of charchaters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openFile, readFile, writeFile;
	char *theBuffer;

	if (filename == NULL)
		return (0);

	theBuffer = malloc(sizeof(char) * letters);
	if (theBuffer == NULL)
		return (0);

	openFile = open(filename, O_RDONLY);
	readFile = read(o, buffer, letters);
	write = write(STDOUT_FILENO, buffer, r);

	if (openFile == -1 || readFile == -1 ||
			witeFile == -1 || writeFile != readFile)
	{
		free(theBuffer);
		return (0);
	}

	free(theBuffer);
	close(openFile);

	return (writeFile);
}
