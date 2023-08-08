#include "main.h"
/**
 * append_text_to_file - append to file
 * @filename: file name
 * @text_content: content to be appended
 * Return: return -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int openFile, writeFile, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	openFile = open(filename, O_WRONLY | O_APPEND);
	writeFile = write(openFile, text_content, len);

	if (openFile == -1 || writeFile == -1)
		return (-1);

	close(openFile);
	return (1);

}
