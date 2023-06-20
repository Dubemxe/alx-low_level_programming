#include <stdio.h>
/**
 * main - print of the sum of multiple of 3 0r 5 up 1024
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d\n", z);
	return (0);
}
