#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the string containing the characters to match
 * Return: the number of characters in the initial segment of s
 * that consist only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s != '\0')
	{
	match = 0;
	for (int i = 0; accept[i] != '\0'; i++)
	{
		if (*s == accept[i])
		{
		count++;
		match = 1;
		break;
		}
	}
	if (match == 0)
	{
		break;
	}
	s++;
	}
	return (count);
}
