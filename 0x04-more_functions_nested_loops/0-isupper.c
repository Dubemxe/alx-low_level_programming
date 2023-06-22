#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for character in uppercase
 *@a: character to be checked
 *
 * Return: if a is uppercase or 0 for anything else
 */
int _isupper(int a)
{
	if (a >= 65 && a <= 90)
	{
	return (1);
	}
	return (0);
}

