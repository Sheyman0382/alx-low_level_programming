#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints a string with the help of a
 * function pointers
 *
 * @name: string name
 * @f: function pointer
 * Return: Anything
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
