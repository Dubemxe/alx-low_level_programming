#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: the string containing the characters to match
 * Return:  the number of characters in the initial segment of s
 * that consist only of characters from accept
 */
char *_strpbrk(char *s, char *accept)
{
        int k;

        while (*s)
        {
                for (k = 0; accept[k] != '\0'; k++)
                {
                if (*s == accept[k])
                        return (s);
                }
                s++;
                }
                return ('\0');
}
