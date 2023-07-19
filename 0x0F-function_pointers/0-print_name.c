#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: name to be printed
 * @f: a pointer function
 * return: Nothing!
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
