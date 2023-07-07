#include "main.h"

/**
 * _strcat - a function that concatenates two strings together
 *
 * @dest: destination string
 * @src: source string
 * Return: Always (0)
 */

char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
