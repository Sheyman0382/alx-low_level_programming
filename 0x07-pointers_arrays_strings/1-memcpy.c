#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 *
 * @dest: destination of memory copied from source
 * @src: memory source
 * @n: number  of bytes of memory
 * 
 * Return: Always(0)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
