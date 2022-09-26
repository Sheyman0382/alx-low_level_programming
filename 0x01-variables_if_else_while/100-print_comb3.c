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
	int c, j;

	for (c = 0; c <= 9; c++)
	{

		for (j = 1; j <= 9; j++)
		{
			if (j > c)
			{
				putchar(c + '0');
				putchar(j + '0');
			}
			if (c != 9 && c != 0)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
