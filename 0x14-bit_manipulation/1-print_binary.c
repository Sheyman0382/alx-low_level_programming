#include "main.h"

/**
 * print_binary - a function that prints the binary value
 * of a digit
 *
 * @n: the digit to be converted
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
