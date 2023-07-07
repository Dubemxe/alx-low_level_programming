#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
        {
        return (1);
        }
        return (0);
}
