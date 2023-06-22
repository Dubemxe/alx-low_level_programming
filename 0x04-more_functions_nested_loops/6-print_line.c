#include "main.h"
/**
 * print_line - Prints a straight line in the terminal
 * @n: Number of _ in the terminal
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	for (i = 0; i < n; n++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
