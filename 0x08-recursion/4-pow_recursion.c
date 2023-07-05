#include "main.h"

/**
 * _pow_recursion - a function that finds the power of a digit
 *
 * @x: digit
 * @y: the power a number is raised to
 * Return: the power of a digit
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * (_pow_recursion(x, y - 1)));
}
