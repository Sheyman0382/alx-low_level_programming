#include "main.h"

/**
 * _isupper - a function that checks if a character is
 * upper case or not
 *
 * @c: the function parameter
 * Return: Always (0)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
