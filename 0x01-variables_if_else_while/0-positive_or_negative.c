#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing positiv, negative, and zero numbers
 * Description - running code for task zero
 * Return: 0 Always (successful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%ld is negtive\n", n);
	}

	return (0);
}
