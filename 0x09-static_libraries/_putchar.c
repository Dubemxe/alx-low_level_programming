#include <unistd.h>
#include "main.h"
/**
 * _putchar writes character c to stdout
 * :Return: On Success 1.
 * on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));	
}
