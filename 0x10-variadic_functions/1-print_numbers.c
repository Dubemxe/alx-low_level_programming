#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints all numbers
 * @separator: the string to be printed between numbers
 * @n: the number of intergers to be passed to the function
 *
 * Return: Nothing!
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
	if (separator != NULL || i != n - 1)
	{	
	printf("%s", separator);
	}
	}
	printf("\n");

	va_end(args);
}	
