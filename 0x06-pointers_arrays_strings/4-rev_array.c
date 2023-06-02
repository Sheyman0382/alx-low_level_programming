#include "main.h"

/**
 * reverse_array - a function that reverses an array
 *
 * @a: the variable of an array to be reversed
 * @n: the length of an array
 *
 * Return: Always(0)
 */

void reverse_array(int *a, int n)
{
	int i, temp = 0;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

