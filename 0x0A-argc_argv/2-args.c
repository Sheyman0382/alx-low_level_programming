#include "main.h"

/**
 * main - Program that the arguments alone
 * @argc: - to count the number of arguments passed into the main function
 * @argv: arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
