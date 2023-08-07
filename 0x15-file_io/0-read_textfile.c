#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads the textfile and prints it to
 * the POSIX standard output
 * @filename: an input value
 * @letters: the numbers of letters to read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t myfile;
	ssize_t rw;
	ssize_t sr;

	myfile = open(filename, O_RDONLY);
	if (myfile == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	sr = read(myfile, buff, letters);
	rw = write(STDOUT_FILENO, buff, sr);

	free(buff);
	close(myfile);
	return (rw);
}
