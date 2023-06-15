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
	static int count = 1;

	if (s[0] == '\0')
	{
		return (count);
	}
	else
	{
		count++;
		_strlen_recursion(s + 1);
		return (count - 1);
	}
}
