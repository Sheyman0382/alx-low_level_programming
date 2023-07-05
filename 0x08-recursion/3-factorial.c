#include "main.h"
/**
 * factorial - a function that calculates the factorial of a number
 *
 * @n: the number's factorial to be calculated
 * Return: an integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
