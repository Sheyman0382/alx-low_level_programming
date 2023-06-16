#include "main.h"

/**
 * isprimem - a function that checks if an integer is a
 * prime number
 *
 * @a: the integer to be checked
 * @b: increamental number
 *
 * Return: integer
 */

int isprimem(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	else
		return (isprimem(a, b + 1));
}
/**
 * is_prime_number - a function that checks if an integer
 * is a prime inumber
 *
 * @n: the integer to be checked
 * Return: return something
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (isprimem(n, 2));
}
