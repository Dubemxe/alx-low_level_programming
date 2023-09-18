#include "main.h"
#include <string.h>
/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s: memory area pointed to
 * @b: the constant byte
 * @n: the number of bytes to be filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
