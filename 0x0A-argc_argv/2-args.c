#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 *
 * @argc: command line argument count
 * @argv: command line argument variable
 *
 * Return: Zero
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
