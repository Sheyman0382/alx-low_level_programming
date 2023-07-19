#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - a function that prints a name with the
 * of a function pointer.
 *
 * @name: a pointer containing the address of a string
 * @f: a pointer to a function that print a name
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
