#include "main.h"
/**
 * print_diagonal - prints diagonal line in the terminal
 * @n: The number of times the diagonal line is printed
 * Return: Nothing!
 */
void print_diagonal(int n)
{
	int d, p;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (d = 0; d < n; d++)
	{
	for (p = 0; p < d; p++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
