#include "function_pointers.h"

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
	(*f)(name);
}
