#include "main.h"

/**
 * get_bit - a function that gets the index value of a bianry
 * @n: the number to operate on
 * @index: the index to be determined
 * Return: 0 0r 1;
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
