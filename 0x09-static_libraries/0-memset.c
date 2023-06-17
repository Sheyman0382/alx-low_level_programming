#include "main.h"

/**
 * _memset - a program that fills memory with a constant
 *  byte
 *  @s: a pointer to a string
 *  @b: the character to fill up the set momory
 *  @n: the number of space the character will occupy
 *
 *  Return: Always(0)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
