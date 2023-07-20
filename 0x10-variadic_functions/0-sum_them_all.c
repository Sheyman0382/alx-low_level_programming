#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its
 * parameters.
 *
 * @n: the number of integers to be sumed up
 * Return: it returns an integer.
 */

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;
	va_list sheyman;

	if (n == 0)
		return (0);
	va_start(sheyman, n);
	for (i = 0; i < n; i++)
	{
		result = result + va_arg(sheyman, int);
	}
	va_end(sheyman);
	return (result);
}
