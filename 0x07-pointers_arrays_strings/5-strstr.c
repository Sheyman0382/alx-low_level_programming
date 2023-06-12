#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substrings
 *
 * @haystack: the scanned string
 * @needle: the substring
 *
 * Return: Always(0)
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k = 0;
	char *sb;

	if (needle[0] == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
			sb = haystack + i;
		else
			continue;
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (sb[k] == needle[j])
				k++;
			if (needle[j + 1] == '\0')
				break;
		}
		if (sb[k-1] == needle[j] && needle[j + 1] == '\0')
		{
		 	return (sb);
		}
	}
	return (0);
}
