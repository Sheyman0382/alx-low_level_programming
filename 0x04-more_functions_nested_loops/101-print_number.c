#include "main.h"

/**
 * print_number - a function that prints an integer
 *
 * @n: the parameter of the function
 * Return: Always (0)
 */

void print_number(int n)
{
	int a;

	if (n < 0)
	{
		a = n * -1;
		_putchar('-');
		_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
	}
	if ((n > 10) && (n <= 99))
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	if ((n >= 100) && (n <= 999))
	{
		_putchar((n / 100) + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar((n % 10) + '0');
	}
	if (n >= 1000)
	{
		_putchar((n / 1000) + '0');
		_putchar((n % 1000) / 100 + '0');
		a = (n % 1000) % 100;
		_putchar((a / 10) + '0');
		_putchar((n % 10) + '0');
	}
	if ((n >= 0) && (n <= 9))
	{
		_putchar(n + '0');
	}
}
