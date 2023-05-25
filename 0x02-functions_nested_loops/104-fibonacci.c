#include <stdio.h>

/**
 * main - a program that prints the first 98
 * fibonacci sequence
 *
 * Return: Always (0)
 */

int main(void)
{
	unsigned long n3, n1 = 0, n2 = 1;
	int count = 0;

	for (count = 0; count < 98; count++)
	{
		n3 = n2 + n1;
		printf("%lu", n3);
		if (count < 97)
			printf(", ");
		else
			printf("\n");
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
