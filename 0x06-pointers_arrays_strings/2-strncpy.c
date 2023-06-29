#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: The destination value
 * @src: The source value
 * @n: the byte of src
 *
 * Return: a pointer from the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for (; i < n; i++)
	dest[i] = '\0';
	return (dest);
}
