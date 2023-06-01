#include "main.h"

/**
 * _strncpy - a function that copies a specified numbers of characters
 *
 * @dest: the destination of the string
 * @src: the source of the string
 * @n: the number characters to be copied from src
 *
 * Return: Always (0)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n && src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
