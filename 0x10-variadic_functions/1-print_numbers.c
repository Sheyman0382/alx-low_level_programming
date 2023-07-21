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
<<<<<<< HEAD
	for (i = 0; i < n; i++)
	{
		j = va_arg(sheyman, int);
		if (i != (n - 1))
		{
			printf("%d%s", j, separator);
		}
		else
		{
			printf("%d\n", j);
		}
	}
	va_end(sheyman);
=======
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			j = va_arg(sheyman, int);
			if (i != n - 1)
			{
				printf("%d%s", j, separator);
			}
			else
			{
				printf("%d\n", j);
			}
		}
	}
>>>>>>> 831d748d671f497dffe69b50ed503cee963a810f
}
