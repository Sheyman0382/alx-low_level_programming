#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigning a random number to the variable n
 * Descriptiom - The last digit
 * Return: 0 Always (Successful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n % 10;

	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
