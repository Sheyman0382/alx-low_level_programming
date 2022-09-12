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
	char c = '1';

	for (c = '1'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
