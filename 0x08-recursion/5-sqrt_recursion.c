#include "main.h"

/**
 * sqrt2 - a function that checks if the square of a number
 * is equal to the number given
 *
 * @a: the square root of the number to be found
 * @b: the squre of the number to be checked
 * Return: return something
 */

int sqrt2(int a, int b)
{
	if (a == b * b)
		return (b);
	if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - a function that prints the square ro0t
 * of a number
 *
 * @n: the square root of a number to be found
 * Return: an integer
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
