#include <stdio.h>

/**
 * main - a program that sums up the multiples of 3 and 5
 * 0 till 1024
 *
 * Return: Always (0)
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
