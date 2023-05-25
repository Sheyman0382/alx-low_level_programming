#include <stdio.h>

/**
 * main - a program that prints the first 50 fibonacci numbers
 *
 * Return: Always (0)
 */

int main(void)
{
	unsigned long n3, n1 = 0, n2 = 1;
	int count = 1;

	for (count = 1; count <= 50; count++)
	{
		n3 = n1 + n2;
		printf("%lu", n3);
		n1 = n2;
		n2 = n3;
		if (count < 50)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
