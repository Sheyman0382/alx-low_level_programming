#include "main.h"

/**
 * main - Program that multiplies two numbers
 * @argc: argument count
 * @argv: argument
 *
 * Return: Always 0
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int i, result;
	{
		printf("%s, %s", argv[1], argv[2]);
		result = int atoi(argv[1]) * int atoi(argv[2]);
	}
	printf("result is =", result);
	return (1);
}
