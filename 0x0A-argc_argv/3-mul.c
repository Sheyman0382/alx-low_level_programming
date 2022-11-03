#include "main.h"
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers
 * @argc: argument count
 * @argv: argument
 *
 * Return: Always 0
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		printf("%s, %s \n", argv[1], argv[2]);
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("result is = %d\n", result);

		return (0);
	}
	else
	{
		printf("Error \n");
	}
	return (1);
}
