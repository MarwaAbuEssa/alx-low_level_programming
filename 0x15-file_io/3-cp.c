#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - create buffer
 * @file: number of file buffer
 * Return: new buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
						"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - close the file
 * @feed: file descriptor
 */
void close_file(int feed)
{
	int cFile;

	cFile = close(feed);

	if (cFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", feed);
		exit(100);
	}
}

/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array of pointers
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int from, to, readFile, writeFile;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	readFile = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || readFile == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		writeFile = write(to, buffer, readFile);

		if (to == -1 || writeFile == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);

			free(buffer);
			exit(99);
		}

		readFile = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (readFile > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
