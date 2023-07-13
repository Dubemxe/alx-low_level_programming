#include "main.h"
#include <stdlib.h>
/**
 * _memset - fills memory with a constant byte
 * @s: memory to be filledd
 * @b: char to copy
 * @n: number of b to be copied
 *
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

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: an array
 * @size: size of the elements in the array
 *
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
