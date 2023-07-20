#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints sttrings
 * @separator: is the string to e printed between strings
 * @n: is the number of strings passed to the function
 *
 * Return:Nothing!
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	char *str = va_arg(args, char *);

	if (str != NULL)
	{
		printf("%s", str);
	}
	else
	{
		printf("nil");
	}
	if (separator != NULL && i != n - 1)
	{
		printf("%s", separator);
	}
	}
	printf("\n");

	va_end(args);
}
