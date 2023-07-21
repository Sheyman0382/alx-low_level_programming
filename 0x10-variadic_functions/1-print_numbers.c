#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers
 *
 * @separator: the separators betweeen the numbers
 * @n: the numbers of arguments to be summed up
 * Return: An integer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list sheyman;
	unsigned int i;
	int j;

	va_start(sheyman, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(sheyman, int);
		printf("%d", j);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(sheyman);
}
