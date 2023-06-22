#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers.
 *
 * @argc: argument counter
 * @argv: argument variable
 *
 * Return: Always (0)
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	if (argc == 1)
		printf("0\n");
	return (0);
}
