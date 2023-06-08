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
       unsigned int i, j;
       unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[i] == '\0')
			break;
	}

	return (count);
}
