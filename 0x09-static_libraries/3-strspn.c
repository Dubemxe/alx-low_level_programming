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
        int r;

        while (*s)
        {
        for (r = 0; accept[r] != '\0'; r++)
        {
                if (*s == accept[r])
                {
                count++;
                break;
                }
        else if (accept[r + 1] == '\0')
                return (count);
        }
        s++;
        }
        return (count);
}
