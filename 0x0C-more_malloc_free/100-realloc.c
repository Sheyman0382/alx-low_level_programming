#include "main.h"

/**
 * _realloc - a function that reallocates a block pf memory
 * using malloc and free
 *
 * @ptr: pointer to the old memory block allocated
 * @old_size: old memory size formally allocated using malloc
 * @new_size: new size of the memory block to be allocated using realloc
 * Return: integer pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	str  = realloc(ptr, new_size);
	if (str == NULL)
		return (NULL);
	for (i = old_size; i < new_size; i++)
	{
		str[old_size] = 0;
	}
	return (str);
}


