#include <stdio.h>

/**
 * main - a program that print 'Fix' for multiples of 3,
 * 'Buz' for multiples of 5, and 'FixBux' for multiples
 * of both 3 and 5
 *
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
~
