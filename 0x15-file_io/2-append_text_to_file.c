#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the filename
 * @text_content: a string to add to the end of the file
 *
 * Return: 1 if success or -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int myfile;
	int wc, len = 0;

	if (filename == NULL)
		return (-1);

	myfile = open(filename, O_WRONLY | O_APPEND);
	if (myfile == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(myfile);
		return (1);
	}
	for (len = 0; text_content[len];)
		len++;

	wc = write(myfile, text_content, len);
	close(myfile);

	if (myfile == -1 || wc == -1)
		return (-1);

	return (1);
}
