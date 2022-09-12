#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
  * main - a program that prints alphabets in lower case
  * Description - I sometimes suffer from insomnia
  * Return: 0 Always (successful)
  */

int main(void)
{
	char c = 'a';

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
