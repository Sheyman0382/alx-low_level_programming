#include "main.h"
/**
 * _islower - a function that checks for the lower case
 * of a character
 * @c: a parameter for the function
 *
 * Return: Always(0)
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
