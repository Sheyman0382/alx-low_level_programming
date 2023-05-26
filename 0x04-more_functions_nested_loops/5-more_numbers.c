#include "main.h"

/**
 * more_numbers - a function that prints digits from 1 to 14
 * ten times
 *
 * Return: Always(0)
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
		{
			_putchar((i / 10) + '0');
		}
		_putchar((i % 10) + '0');
		_putchar('\n');
	}
}
