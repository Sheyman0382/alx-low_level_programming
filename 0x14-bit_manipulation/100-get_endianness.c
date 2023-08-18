#include "main.h"

/**
 * get_endianness - a function that checks the bit ordering
 * of a machine
 *
 * Return: return 0 or 1
 */

int get_endianness(void)
{
	int a = 98;
	int *ptr = &a;

	int *endianess = ptr;

	if (*endianess == 98)
		return (1);
	return (0);
}
