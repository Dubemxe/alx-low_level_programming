#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _buffer - Allocates bytes for a buffer
 * @file: the name of the file
 *
 * Return: a pointer to the allocated buffer
 */
char *_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit (99);
	}
	return (buff);
}
/**
 * close_file - Closes file descriptors.
 * @myfile: The file descriptor to be closed.
 */
void close_file(int myfile)
{
	int cl;

	cl = close(myfile);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", myfile);
		exit(100);
	}
}

/**
 * main - copies the contents of a file from one to another
 * @argn: the number of arguments
 * @argv: an array of pointers
 *
 * Return: 0 on success.
 *
 */
int main(int argn, char *argv[])
{
	int from, to, rp, wp;
	char *buff;

	if (argn != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = _buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rp = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rp == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wp = write(to, buff, rp);
		if (to == -1 || wp == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rp = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rp > 0);

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}
