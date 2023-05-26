#include "main.h"

/**
 * _isdigit - a function that checks if a character is
 * a digit or not
 *
 * @c: the parameter function
 * Return: Always(0)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
