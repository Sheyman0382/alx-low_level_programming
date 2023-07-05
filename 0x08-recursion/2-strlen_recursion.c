#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of
 * a string recursively
 *
 * @s: pointer to a string parameter
 * Return: Always (0)
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (s[0] == '\0')
	{
		return (count);
	}
	else
	{
		return (1 + (_strlen_recursion(s + 1)));
	}
}
