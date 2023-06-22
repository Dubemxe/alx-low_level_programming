#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for character that is a number
 * @n: characters to be checked
 *
 * Return: 1 if n is a number or 0 if anything else
 */
int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
	return (1);
	}
	return (0);
}
