#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: - the destination value
 * @src: the source value
 * @n: the bytes from src
 *
 * Return: A pointer from the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr++ = *src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
