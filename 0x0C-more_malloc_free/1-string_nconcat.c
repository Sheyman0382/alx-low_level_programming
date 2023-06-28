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
	unsigned int i, j, len;
	unsigned int count1 = 0;
	unsigned int count2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		count1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
		count2++;
	if (n > count2)
		len = count1 + count2;
	else
		len = count1 + n;

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
