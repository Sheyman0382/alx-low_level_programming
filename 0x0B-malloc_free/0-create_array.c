#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of a
 * unique character
 * @size: the lenght of the character to be created
 * @c: the unique character
 *
 * Return: Anything
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
