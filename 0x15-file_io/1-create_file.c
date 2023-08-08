#include "main.h"

/**
 * create_file - create file
 * @filename: pointer to file name
 * @text_content: content written in file
 * Return: -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
	int openFile, writeFile, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	openFile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writeFile = write(openFile, text_content, len);

	if (openFile == -1 || writeFile == -1)
		return (-1);


	close(openFile);
	return (1);

}
