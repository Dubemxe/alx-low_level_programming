#include "main.h"
/**
 * _isalpha - checks code for alphabetic character
 * @c: characters to be checked
 * Return:  1 if character is an alphabet or 0 if anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

