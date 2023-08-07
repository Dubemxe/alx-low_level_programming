#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file with certain permission acess
 * @filename: the file name
 * @text_content: a string to write to the file
 *
 * Return: 1 if successs -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int myfile;
	int rw, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}
	myfile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	rw = write(myfile, text_content, len);
	if (myfile == -1 || rw == -1)
		return (-1);

	close(myfile);
	return (1);
}
