#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers
 *
 * @width: the number of column
 * @height: the number of row
 *
 * Return: return a pointer to a pointer
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = malloc(sizeof(int) * width);
			if (ptr[i] != NULL)
			{
				for (j = 0; j < width; j++)
				{
					ptr[i][j] = 0;
				}
			}
			else
			{
				while (i >= 0)
				{
					free(ptr[i]);
					i--;
				}
				free(ptr);
				ptr = NULL;
			}
		}
		return (ptr);
	}
	else
		return (NULL);
}
