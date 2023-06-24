#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as
 * a parameter
 *
 * @str: string to be filled into the new memory allocated
 * Return: Anything
 */

char *_strdup(char *str)
{
	int i, count = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;

	ptr = malloc(sizeof(char) * count + 1);

	if (ptr == NULL)
		return (0);
	for (i = 0; i <= count; i++)
		ptr[i] = str[i];

	return (ptr);
}
