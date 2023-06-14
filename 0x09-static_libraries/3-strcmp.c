#include "main.h"

/**
 * _strcmp - a program that compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: (0);
 */

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	for (i = 0; (s1[i] != '\0' || s2[i] != '\0'); i++)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			diff = s1[i] - s2[i];
			break;
		}
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
	}
	diff = s1[i] - s2[i];
	return (diff);
}
