#include "main.h"

/**
 * array_range - a function that creates an array of integers
 *
 * @min: the minimum value of the array elements
 * @max: the maximum value of the array elements
 *
 * Return: integer pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size = 0;

	if (min > max)
		return (NULL);
	size = ((max - min) + 1);
	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
