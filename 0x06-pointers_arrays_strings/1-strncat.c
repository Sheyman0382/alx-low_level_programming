#include "main.h"

/**
 * _strncat - a function that concatenates a specific number of characters
 * from the source to the destination
 *
 * @dest: destination of string
 * @src: source of characters
 * @n: numbers of characters to be concatenated from the source to the
 * destination
 *
 * Return: Always (0);
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < n; i++)
	{
		dest[len + i] = src[i];
	}

	return (dest);
}
