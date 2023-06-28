#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the ammount of string to be concatenated to s1 from s2
 *
 * Return: character pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, count, len;

	for (i = 0; s1[i] != '\0'; i++)
	{
		count++;
	}
	len = count + n;

	ptr = malloc(sizeof(*ptr) * len + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';

	return (ptr);
}
