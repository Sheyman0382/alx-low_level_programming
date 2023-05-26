#include "main.h"

/**
 * print_line - a function that prints the nth lines
 *
 * @n: n represents the number of times '_' will be printed
 * Return: Always (0)
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
