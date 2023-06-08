#include "main.h"

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
	int i, j, flag;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					flag = 0;
					break;
				}
				else
					flag = 1;
			}
		}
		if (flag == 1)
			return (haystack + i);
	}
	return (haystack + i);
}
