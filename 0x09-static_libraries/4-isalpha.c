#include "main.h"

/**
 * _isalpha - a function that checks for the upper case
 * of a character
 *
 * @c: represents a parameter for the function
 * Return: Always (0)
 */

int _isalpha(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
