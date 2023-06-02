#include "main.h"

/**
 * print_number - a function that prints an integer
 *
 * @n: function parameter
 * Return: Always(0)
 */

void print_number(int n)
{
	int a = n;

	if (n < 0)
	{
		a = n * -1;
		_putchar('-');
		_putchar(a / 10 + '0');
		_putchar(a % 10 + '0');
	}
	if (n == 0)
	{
		_putchar('0');
	}
	if (n > 9 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (n > 99 && n < 1000)
	{
		_putchar(n / 100 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (n >= 1000)
	{
		_putchar(n / 1000 + '0');
		_putchar((n % 1000) / 100 + '0');
		_putchar((n % 100) / 10  + '0');
		_putchar(n % 10 + '0');
	}
}
