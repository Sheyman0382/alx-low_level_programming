#include "main.h"

/**
 * _print_rev_recursion - a function that prints the reverse of a string
 * in a recursive way
 *
 * @s: pointer to a string parameter
 * Return: Always (0)
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
	}
}
