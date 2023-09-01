#include "main.h"

/**
 * get_bit - a function that gets the index value of a bianry
 * @index: the index to be determined
 * @n: the number to operate on
 * @ Return: 0 0r 1;
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
