#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 *
 * @a: a parameter of type integer
 * Return: Always(0)
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
