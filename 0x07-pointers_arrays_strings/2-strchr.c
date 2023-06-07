#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: a pointer to a string
 * @c: a character
 *
 * Return: Always (0)
 */

char *_strchr(char *s, char c)
{
	int i;
	char *j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			j = (s + i);
			return (j + i);
		}
	}
	if (s[i] == c)
		return (s + i);

	return (0);
}
