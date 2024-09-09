#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: string to be scanned
 * @accept: strings to be returned
 *
 * Return: Always(0)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
			if (s[i] == accept[j])
				break;
		}
		if ((s[i] != accept[i]) && (accept[j] == '\0'))
			break;
	}

	return (count);
}
