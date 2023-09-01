#include "main.h"


int _strlen(const char *str)
{
	int i, count = 0;
	while (str[i])
	{
		count++;
		i++;
	}
	return (count);
}


/*
 * power - a function that calculates the exponential of an integer
 * @a: the number to be exponented
 * @b: the exponential value
 *
 * Return: Return an integer
 */

int power(int a, int b)
{
	int pow = 1;

	while (b != 0)
	{
		pow = pow * a;
		b--;
	}
	return (pow);
}

/*
 * binary_to_uint - a program that converts a binary to unit
 *
 * @b: a pointer to a stream of characters
 * Return: An integer
 */

unsigned int binary_to_uint(const char *b)
{
	char str[] = b;
	int base, len, num, exp, result, pow = 0;
	int sum_result = 0;

	len = (_strlen(str) - 1);
	while (len <= 0)
	{
		base = 2;
		num = str[len] - '0';
		if (num == 1)
		{
			exp = power(base, pow);
			result = num * exp;
			sum_result = sum_result + result;
		}
		pow++;
		len--;
	}
	return (sum_result);
}
