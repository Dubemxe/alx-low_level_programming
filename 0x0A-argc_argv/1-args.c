#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument value
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/

	printf("%d\n", argc - 1);

	return (0);
}
