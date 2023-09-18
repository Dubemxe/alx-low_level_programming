#include "main.h"
/**
 * _strstr - locates a substring
 * @needle: the substring
 * @haystack: the string to be searched
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *start = haystack;
	char *pattern = needle;

	while (*haystack != '\0' && *pattern != '\0' && *haystack == *pattern)
	{
	haystack++;
	pattern++;
	}
	if (*pattern == '\0')
	{
	return (start);
	}
	haystack = start + 1;
	}
	return ('\0');
}
