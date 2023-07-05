#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 *
 * @s: a pointer to a string parameter
 * Return: Always (0)
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar(10);
		return;
	}
	else
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}
}
