#include "main.h"
#include <string.h>
/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 * @n: number of bytes to be copied
 * @src: source value
 * @dest: destination value
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                dest[i] = src[i];
        }
        return (dest);
}
