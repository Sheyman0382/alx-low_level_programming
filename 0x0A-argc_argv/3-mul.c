#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 *
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: Anything
 */

int main(int argc, char **argv)
{
	int a, b;

	if (argc != 3)
		printf("Error");
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	return (0);
}
