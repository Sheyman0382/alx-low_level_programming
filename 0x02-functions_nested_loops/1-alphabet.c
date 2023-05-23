#include "main.h"

/**
 * print_alphabet - a function that prints alphabets in lower case
 *
 * Description - return nothing
 * Return: Always (0)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
