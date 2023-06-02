#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @str: pointer to a string
 * Return: Always(0)
 */

char *cap_string(char *str)
{
	int i, j;
	char sep[50] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (i == 0)
			{
				if (str[0] >= 'a' && str[0] <= 'z')
					str[0] = str[0] - 32;
			}
			if (str[i] == sep[j])
			{
				if(str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
