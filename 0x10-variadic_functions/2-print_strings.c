#include "variadic_functions.h"

/**
 * print_strings - a function that prints a string
 *
 * @separator: the string that separates the strings from each other
 * @n: the number of strings to be printed
 *
 * Return: The return type of the function is void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sheyman;
	char *j;
	unsigned int i;

	va_start(sheyman, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(sheyman, char *);
		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(sheyman);
}
