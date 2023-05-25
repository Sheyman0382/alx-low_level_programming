#include <stdio.h>

/**
 * main - a program that prints fibonacci sequence
 *
 * Description - the sequence to be printed should not be more than 4000000,
 * and the sequence to be printed out should be even in nature.
 *
 * Return: Always (0)
 */

int main(void)
{
	unsigned long n3 = 0, n2 = 1, n1 = 0;
	unsigned long sum = 0;

	for (n3 = 0; n3 <= 4000000; n3++)
	{
		n3 = n2 + n1;
		if (n3 % 2 == 0)
		{
			sum = sum + n3;
		}
		n1 = n2;
		n2 = n3;
	}
	printf("%lu\n", sum);
	return (0);
}
