#include <stdio.h>
/**
 * _strcmp - compare two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: negative value if s1 is less than s2
 * zero if s1 and s2 are equal
 * positive value if s1 is greater than s2
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
